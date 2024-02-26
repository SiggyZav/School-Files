#include <Arduino.h>

const int HalPin = 5;
const int TempPin = 7;
#define LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(HalPin, INPUT);
  pinMode(TempPin, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float mag = digitalRead(HalPin);
  float temp = digitalRead(TempPin);
  digitalWrite(LED, LOW);
  if (mag == HIGH) {
    digitalWrite(LED, HIGH);
  }
}
