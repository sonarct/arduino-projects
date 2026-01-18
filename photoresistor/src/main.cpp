#include <Arduino.h>

const int light = A0;
const int led = 12;
const int threshold = 800;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(light);

  Serial.println(value);

  if (value <= threshold) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

  delay(100);
}
