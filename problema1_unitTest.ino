#include <Arduino.h>
#include "unity.h"

uint8_t led_pin = 5;

void test_led_state_high(void) {
    turn_led_on(led_pin);
    TEST_ASSERT_EQUAL(LOW, digitalRead(led_pin));
    if (led_state == HIGH) {
        Serial.println("LED state is HIGH. Test passed!");
    } else {
        Serial.println("LED state is LOW. Test failed!");
    }
}

void setup() {
    delay(2000);
    Serial.begin(9600);
    UNITY_BEGIN();
    RUN_TEST(test_led_state_high);
    UNITY_END();
}

void loop() {
}
