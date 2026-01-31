#include <Arduino.h>

void setup() {
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A4);

  float voltage = sensorValue * (500.0 / 1024.0);

  Serial.println(voltage);

  delay(500);
}
