#include <stdint.h>
#include "pico/stdlib.h"

#ifndef LED_H
#define LED_H

void led_init(uint red_pin, uint green_pin, uint blue_pin);
void led_on(uint led_pin);
void led_off(uint led_pin);
void led_all_off();

#endif
