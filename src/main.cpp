#include "main.h"
void setup() {
  Serial.begin(9600);
  SPI.setMOSI(PIN_MOSI);
  SPI.setMISO(PIN_MISO);
  SPI.setSCK(PIN_SCK);
  if (SensorTwo.begin() != 0) {
    Serial.println("Problem starting the sensor with CS @ Pin 9.");
  }
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
  pinMode(PIN_LED_5, OUTPUT);
  pinMode(PIN_BUZZ, OUTPUT);
  digitalWriteFast(PIN_LED_1, 1);
  digitalWriteFast(PIN_LED_2, 1);
  digitalWriteFast(PIN_LED_3, 1);
  digitalWriteFast(PIN_LED_4, 1);
  digitalWriteFast(PIN_LED_5, 1);
  tone(PIN_BUZZ, 2000, 500);


}
void loop() {
  Serial.print(" X2 = ");
  Serial.println(SensorTwo.readFloatAccelX(), 4);
  delay(100);
}
