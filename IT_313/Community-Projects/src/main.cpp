#include <Arduino.h>

int val = 0;  // variable to store hall sensor measurement
const int halPin = 5;
#define LED 2

void magnet_detect() {
    Serial.println("Detect");
}

void setup() {
    Serial.begin(500000);
    while(Serial.available());
    pinMode(halPin, INPUT);
    pinMode(LED, OUTPUT);
    attachInterrupt(halPin, magnet_detect, RISING);
}

void loop() {  // Put your main code here to run repeatedly
    delay(1000);
    digitalWrite(LED, LOW);
    int val = digitalRead(halPin);  // variable to store value of hall sensor
}