/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
 */

// void setup() {
//   // initialize the digital pin as an output.
//   // Pin 13 has an LED connected on most Arduino boards:
//   pinMode(13, OUTPUT);
// }

// void loop() {
//   digitalWrite(13, HIGH);   // set the LED on
//   delay(1000);              // wait for a second
//   digitalWrite(13, LOW);    // set the LED off
//   delay(1000);              // wait for a second
// }

#include <Arduino.h>
#include "unity.h"

uint8_t led_pin = 5;

void turn_led_on() {
    digitalWrite(led_pin, HIGH);
}

void test_led_state_high(void) {
    turn_led_on();
    TEST_ASSERT_EQUAL(HIGH, digitalRead(led_pin));
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_led_state_high);
    UNITY_END();
}

void loop() {
}
