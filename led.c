// led.c
#include "led.h"
#include "pico/stdlib.h"
static uint red_pin, green_pin, blue_pin;

void led_init(uint r_pin, uint g_pin, uint b_pin) {
    red_pin = r_pin;
    green_pin = g_pin;
    blue_pin = b_pin;

    // Initialize all LED pins
    gpio_init(red_pin);
    gpio_init(green_pin);
    gpio_init(blue_pin);

    gpio_set_dir(red_pin, GPIO_OUT);
    gpio_set_dir(green_pin, GPIO_OUT);
    gpio_set_dir(blue_pin, GPIO_OUT);
}

void led_on(uint led_pin) {
    gpio_put(led_pin, true);
}

void led_off(uint led_pin) {
    gpio_put(led_pin, false);
}

void led_all_off() {
    gpio_put(red_pin, false);
    gpio_put(green_pin, false);
    gpio_put(blue_pin, false);
}
