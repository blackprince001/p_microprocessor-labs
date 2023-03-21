#include "Arduino.h"

int switchInput = 2;

void setup() { pinMode(switchInput, INPUT); }

void loop() { digitalRead(switchInput); }