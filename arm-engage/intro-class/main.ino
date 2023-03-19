#include "Arduino.h"

int but = 8;

void setup() { 
    Serial.begin(115200);
    pinMode(but, INPUT_PULLUP);
}

void loop() {
    int val = digitalRead(but);
    Serial.println(val); // print the value from the button

    if (val == 1) digitalWrite(13, HIGH);
    else digitalWrite(13, LOW);
}