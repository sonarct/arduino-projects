#include <Arduino.h>

const int button = 5;
const int led = 12;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
