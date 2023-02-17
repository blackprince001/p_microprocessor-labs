int pos = 0;
int fbuzzer = 8;
int sbuzzer = 7;
int tbuzzer = 6;

void play_multiple_tones(int b1, int b2, int b3) {
    noTone(b3);
    tone(b1, 880, 2000);
    delay(200);
    noTone(b1);
    tone(b2, 988, 1000);
    delay(300);
    noTone(b2);
    tone(b3, 1047, 2500);
    delay(500);
}

void setup() {
    pinMode(fbuzzer, OUTPUT);
    pinMode(sbuzzer, OUTPUT);
    pinMode(tbuzzer, OUTPUT);
}

void loop() { play_multiple_tones(fbuzzer, sbuzzer, tbuzzer); }