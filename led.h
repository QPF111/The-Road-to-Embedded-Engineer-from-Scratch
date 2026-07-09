#ifndef LED_H
#define LED_H

#include <stdint.h>
#include "register.h"

void gpio_init_output(GPIO_TypeDef *gpio, int pin);

void led_on(GPIO_TypeDef *gpio, int pin);

void led_off(GPIO_TypeDef *gpio, int pin);

void led_toggle(GPIO_TypeDef *gpio, int pin);

int  led_read(GPIO_TypeDef *gpio, int pin);

void led_show(GPIO_TypeDef *gpio);

#endif // LED_H