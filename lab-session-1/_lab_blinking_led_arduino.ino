int led_red = 12;
int led_green = 8;
int led_yellow = 2;

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
    blinkLED(1000, led_red);
    blinkLED(1000, led_green);
    blinkLED(1000, led_yellow);
}