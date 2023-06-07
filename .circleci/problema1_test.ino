#include <Arduino.h>
#include "unity.h"

uint8_t led_pin = 5;

void test_led_state_high(void) {
    turn_led_on();
    TEST_ASSERT_EQUAL(LOW, digitalRead(led_pin));
}

void setup() {
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_led_state_high);
    UNITY_END();
}

void loop() {
    
}
