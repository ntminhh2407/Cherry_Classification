#include <Wire.h>
#include <Adafruit_AS7341.h>
#include <Adafruit_NeoPixel.h>

// AS7341
Adafruit_AS7341 as7341;

// NeoPixel
#define LED_PIN 18
#define LED_COUNT 12

Adafruit_NeoPixel led(
  LED_COUNT,
  LED_PIN,
  NEO_GRB + NEO_KHZ800
);

#define SDA_PIN 21
#define SCL_PIN 22

void setup() {
  Serial.begin(115200);

  // I2C
  Wire.begin(SDA_PIN, SCL_PIN);

  // AS7341
  if (!as7341.begin()) {
    Serial.println("AS7341 ERROR");
    while (1) delay(100);
  }

  as7341.setATIME(100);
  as7341.setASTEP(999);
  as7341.setGain(AS7341_GAIN_256X);

  // LED
  led.begin();
  led.setBrightness(80); // 0-255
  for (int i = 0; i < LED_COUNT; i++) {
    led.setPixelColor(i, led.Color(255,255,255));
  }
  led.show();

  delay(500);

  Serial.println(
    "F1,F2,F3,F4,F5,F6,F7,F8,CLEAR,NIR"
  );
}

void loop() {
  uint16_t readings[12];

  if (!as7341.readAllChannels(readings)) {
    Serial.println("ERROR");
    delay(500);
    return;
  }

  Serial.print(readings[0]); Serial.print(",");
  Serial.print(readings[1]); Serial.print(",");
  Serial.print(readings[2]); Serial.print(",");
  Serial.print(readings[3]); Serial.print(",");

  Serial.print(readings[6]); Serial.print(",");
  Serial.print(readings[7]); Serial.print(",");
  Serial.print(readings[8]); Serial.print(",");
  Serial.print(readings[9]); Serial.print(",");

  Serial.print(readings[10]); Serial.print(",");
  Serial.println(readings[11]);

  delay(500);
}