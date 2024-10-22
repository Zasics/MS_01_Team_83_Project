#include <stdio.h>
#include "pico/stdlib.h"
#include "led.h"

int main() {

    uint red_pin = 6, green_pin = 7, blue_pin = 8;

    // Initialize LEDs
    led_init(red_pin, green_pin, blue_pin);  // Assign GPIO pins for Red, Green, and Blue LEDs

    while (true) {
        // Run the LED sequence
        // First, turn all LEDs off
        led_all_off();
        sleep_ms(5000);

        // Red LED on for 1 second
        led_on(red_pin);
        sleep_ms(1000);
        led_off(red_pin);

        // Green LED on for 1 second
        led_on(green_pin);
        sleep_ms(1000);
        led_off(green_pin);

        // Blue LED on for 1 second
        led_on(blue_pin);
        sleep_ms(1000);
        led_off(blue_pin);

        // All LEDs on for 2 seconds
        led_on(red_pin);
        led_on(green_pin);
        led_on(blue_pin);
        sleep_ms(2000);

        // Turn all LEDs off again
        led_all_off();
    }
}
