#ifndef LED_H
#define LED_H

#include <stdint.h>

void led_on(volatile uint32_t *GPIOA_ODR, int led);

void led_off(volatile uint32_t *GPIOA_ODR, int led);

void led_toggle(volatile uint32_t *GPIOA_ODR, int led);

int led_is_on(volatile uint32_t GPIOA_ODR, int led);

void led_show(volatile uint32_t GPIOA_ODR);

int led_read(volatile uint32_t reg,int led);

#endif