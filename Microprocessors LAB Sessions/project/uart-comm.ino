#include "Arduino.h"

int ledpin = 13;

void setup() {
    pinMode(8, INPUT_PULLUP);
    pinMode(ledpin, OUTPUT);
    digitalWrite(ledpin, LOW);

    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        char data_rcvd = Serial.read();

        if (data_rcvd == '1') digitalWrite(ledpin, HIGH);
        if (data_rcvd == '0') digitalWrite(ledpin, LOW);
    }

    if (digitalRead(8) == HIGH)
        Serial.write('0');
    else
        Serial.write('1');
}