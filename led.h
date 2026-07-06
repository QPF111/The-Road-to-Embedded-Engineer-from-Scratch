#ifndef LED_H
#define LED_H

#include <stdint.h>

void led_on(uint32_t *reg, int led);

void led_off(uint32_t *reg, int led);

void led_toggle(uint32_t *reg, int led);

int led_is_on(uint32_t reg, int led);

void led_show(uint32_t reg);

#endif