#ifndef LED_H
#define LED_H

#include <stdint.h>
#include "register.h"

void led_init(void);
void led_on(void);
void led_off(void);
void led_toggle(void);
void led_show(void);
int led_read(void);

#endif // LED_H