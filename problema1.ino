#include <Arduino.h>

uint8_t led_pin = 5;

void turn_led_on(uint8_t led_pin) {
    digitalWrite(led_pin, HIGH);
}

void setup() {
    turn_led_on(led_pin);
}

void loop() {
}

