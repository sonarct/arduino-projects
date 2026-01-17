#include <Arduino.h>
#include <SPI.h>

const int latchPin = 10;

void setup() {
  pinMode(latchPin, OUTPUT);
  SPI.begin(); 
}

void loop() {
  for (int i = 0; i < 8; i++) {
    byte data = (1 << i);

    digitalWrite(latchPin, LOW);

    SPI.beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE0));
    SPI.transfer(data);
    SPI.endTransaction();

    digitalWrite(latchPin, HIGH);

    delay(30);
  }
}