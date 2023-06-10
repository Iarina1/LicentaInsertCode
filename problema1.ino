#include <Arduino.h>
#include "unity.h"

uint8_t led_pin = 5;

void turn_led_on(uint8_t led_pin) {
    digitalWrite(led_pin, HIGH);
}

void test_led_state_high(void) {
    turn_led_on(led_pin);
    int led_state = digitalRead(led_pin)
    TEST_ASSERT_EQUAL(LOW, digitalRead(led_pin));
    if (led_state == HIGH) {
        Serial.println("LED state is HIGH. Test passed!");
    } else {
        Serial.println("LED state is LOW. Test failed!");
    }
}

void setup() {
    Serial.begin(9600);
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_led_state_high);
    UNITY_END();
}

void loop() {
}

