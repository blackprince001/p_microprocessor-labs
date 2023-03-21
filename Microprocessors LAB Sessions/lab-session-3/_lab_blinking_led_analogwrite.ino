#include "Arduino.h"

int ledInput = 2;

void analogBlinkingLed(int pinName, int seconds) {
    analogWrite(pinName, 255);
    delay(seconds);

    analogWrite(pinName, 0);
    delay(seconds);
}

void setup() { pinMode(ledInput, OUTPUT); }

void loop() { analogBlinkingLed(ledInput, 500); }