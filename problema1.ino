#include <Arduino.h>

uint8_t led_pin = 5;

void turn_led_on() {
    digitalWrite(led_pin, HIGH);
}

/*void setup() {
    Serial.begin(9600);
    delay(2000);
    turn_led_on();
}

void loop() {
}*/
