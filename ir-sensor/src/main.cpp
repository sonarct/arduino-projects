#include <Arduino.h>

void setup() {
  pinMode(7, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

int flame = 0;

void loop() {
  flame = analogRead(A0);
  Serial.println(flame);

  digitalWrite(7, flame >= 10 ? HIGH : LOW);

  delay(200);
}
