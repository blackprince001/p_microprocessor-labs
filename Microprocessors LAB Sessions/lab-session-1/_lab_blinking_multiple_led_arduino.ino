#include "Arduino.h"

int led_red = 12;
int led_green = 9;
int led_yellow = 2;

int red_delay_time = 1000;
int green_delay_time = 5000;
int yellow_delay_time = 2000;

void blinkLED(int seconds, int pinName) {
    digitalWrite(pinName, HIGH);
    delay(seconds);

    digitalWrite(pinName, LOW);
    delay(seconds);
}

void setup() {
    pinMode(led_red, OUTPUT);
    pinMode(led_green, OUTPUT);
    pinMode(led_yellow, OUTPUT);
}

void loop() {
    blinkLED(red_delay_time, led_red);
    blinkLED(green_delay_time, led_green);
    blinkLED(yellow_delay_time, led_yellow);
}