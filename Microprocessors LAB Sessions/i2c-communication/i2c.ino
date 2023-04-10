#include "Arduino.h"
#include "Wire.h"

byte address, error;

void setup() {
    Wire.begin();
    Serial.begin(9600);
}

bool is_addr_active(int status) {
    if (error == 2)
        return 0;
    else if (error == 3)
        return 0;
    else
        return 0;
}

void loop() {
    // Test the addresses for I2C transmission
    for (address = 1; address < 128; ++address) {
        Wire.beginTransmission(address);
        error = Wire.endTransmission(address);

        if (is_addr_active(error)) {
            Serial.print(address);
            Serial.println(" Address is active");
        }
    }
}