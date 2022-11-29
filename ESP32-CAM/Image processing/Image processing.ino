#include "esp_camera.h"
#include "soc/soc.h" // Disable brownour problems
#include "soc/rtc_cntl_reg.h" // Disable brownour problems
#include "driver/rtc_io.h"
#include "img_converters.h"
// Pin definition for CAMERA_MODEL_AI_THINKER
#define PWDN_GPIO_NUM 32
#define RESET_GPIO_NUM -1
#define XCLK_GPIO_NUM 0
#define SIOD_GPIO_NUM 26
#define SIOC_GPIO_NUM 27
#define Y9_GPIO_NUM 35
#define Y8_GPIO_NUM 34
#define Y7_GPIO_NUM 39
#define Y6_GPIO_NUM 36
#define Y5_GPIO_NUM 21
#define Y4_GPIO_NUM 19
#define Y3_GPIO_NUM 18
#define Y2_GPIO_NUM 5
#define VSYNC_GPIO_NUM 25
#define HREF_GPIO_NUM 23
#define PCLK_GPIO_NUM 22
// our call back to dump whatever we got in binary format
size_t jpgCallBack(void * arg, size_t index, const void* data, size_t len)
{
uint8_t* basePtr = (uint8_t*) data;
for (size_t i = 0; i < len; i++) {
Serial.write(basePtr[i]);
}
return 0;
}
void setup() {
WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //disable brownout detector
Serial.begin(115200);
camera_config_t config;
config.ledc_channel = LEDC_CHANNEL_0;
config.ledc_timer = LEDC_TIMER_0;
config.pin_d0 = Y2_GPIO_NUM;
config.pin_d1 = Y3_GPIO_NUM;
config.pin_d2 = Y4_GPIO_NUM;
config.pin_d3 = Y5_GPIO_NUM;
config.pin_d4 = Y6_GPIO_NUM;
config.pin_d5 = Y7_GPIO_NUM;
config.pin_d6 = Y8_GPIO_NUM;
config.pin_d7 = Y9_GPIO_NUM;
config.pin_xclk = XCLK_GPIO_NUM;
config.pin_pclk = PCLK_GPIO_NUM;
config.pin_vsync = VSYNC_GPIO_NUM;
config.pin_href = HREF_GPIO_NUM;
config.pin_sscb_sda = SIOD_GPIO_NUM;
config.pin_sscb_scl = SIOC_GPIO_NUM;
config.pin_pwdn = PWDN_GPIO_NUM;
config.pin_reset = RESET_GPIO_NUM;
config.xclk_freq_hz = 20000000;
config.pixel_format = PIXFORMAT_GRAYSCALE;
if (psramFound()) {
config.frame_size = FRAMESIZE_QQVGA; // FRAMESIZE_ + QVGA|CIF|VGA|SVGA|XGA|SXGA|UXGA
config.fb_count = 2;
} else {
Serial.println(F("ps RAM not found"));
return;
}
// Init Camera
esp_err_t err = esp_camera_init(&config);
if (err != ESP_OK) {
Serial.printf("Camera init failed with error 0x%x", err);
return;
}
// disable white balance and white balance gain
sensor_t * sensor = esp_camera_sensor_get();
sensor->set_whitebal(sensor, 0); // 0 = disable , 1 = enable
sensor->set_awb_gain(sensor, 0); // 0 = disable , 1 = enable
camera_fb_t * fb = NULL;
// Take Picture with Camera
fb = esp_camera_fb_get();
if (!fb) {
Serial.println("Camera capture failed");
return;
}
// DUMP THE PIXELS AS ASCII TO SERIAL
Serial.printf("\n\nWidth = %u, Height=%u\n", fb->width, fb->height);
for (size_t i = 0; i < fb->len; i++) {
if (i % 16 == 0) Serial.printf("\n%06u\t", i);
if (fb->buf[i] < 0x10) Serial.write('0');
Serial.print(fb->buf[i], HEX);
}
Serial.println(F("\n\n---------------------\nPREPARE TO CAPTURE TO FILE\n"));
delay(6000);
frame2jpg_cb(fb, 10, jpgCallBack, NULL);
esp_camera_fb_return(fb);
}
void loop() {}