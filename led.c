#include <stdio.h>
#include "led.h"

#define LED_GPIO (&GPIOA)
#define LED_PIN 1U

void led_on(LED_Device *led)
{
    led->gpio->ODR |= (1U << led->pin);
}

void led_off(LED_Device *led)
{
    led->gpio->ODR &= ~(1U << led->pin);
}

void led_toggle(LED_Device *led)
{
    led->gpio->ODR ^= (1U << led->pin);
}


void led_show (LED_Device *led)
{
    for(int i=0;i<8;i++)
    {
        if(led->gpio->ODR&(1U<<i))
            printf("LED%d : ON \n",i);
        else
            printf("LED%d : OFF\n",i);    
    }
}

int led_read(LED_Device *led)
{
    if(led->gpio->ODR & (1U << led->pin))
        return 1;
    else
        return 0;
}

void led_init(LED_Device *led)
{
    gpio_init_output(led->gpio, led->pin);
}

LED_Device led_power =
{
    &GPIOA,
    1
};

LED_Device led_wifi =
{
    &GPIOB,
    5
};