#ifndef LED_H
#define LED_H

#include <stdint.h>
#include "register.h"

void led_init(LED_Device *led);
void led_on(LED_Device *led);
void led_off(LED_Device *led);
void led_toggle(LED_Device *led);
void led_show(LED_Device *led);
int led_read(LED_Device *led);

typedef struct
{
    GPIO_TypeDef *gpio;
    uint8_t pin;

} LED_Device;

extern LED_Device led_power;

extern LED_Device led_wifi;

#endif // LED_H