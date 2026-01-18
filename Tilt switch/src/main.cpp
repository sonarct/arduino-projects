#include <Arduino.h>

const int tiltSwitch = 5;

void setup() {
  pinMode(tiltSwitch, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(tiltSwitch) == LOW) {
    Serial.println("disconnected");
  } else {
    Serial.println("connected");
  }

  delay(100);
}
