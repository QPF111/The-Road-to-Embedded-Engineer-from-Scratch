#include <stdio.h>
#include "led.h"

#define LED_GPIO (&GPIOA)
#define LED_PIN 1U

void led_on(void)
{
    LED_GPIO->ODR |= (1U << LED_PIN);
}

void led_off(void)
{
    LED_GPIO->ODR &= ~(1U << LED_PIN);
}

void led_toggle(void)
{
    LED_GPIO->ODR ^= (1U << LED_PIN );
}


void led_show (void)
{
    for(int i=0;i<8;i++)
    {
        if(LED_GPIO->ODR&(1U<<i))
            printf("LED%d : ON \n",i);
        else
            printf("LED%d : OFF\n",i);    
    }
}

int led_read(void)
{
    if(LED_GPIO->ODR & (1U << LED_PIN))
        return 1;
    else
        return 0;
}

void led_init(void)
{
    gpio_init_output(LED_GPIO, LED_PIN);
}