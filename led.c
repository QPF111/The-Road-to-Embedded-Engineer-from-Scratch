#include <stdio.h>
#include "led.h"

void led_on (volatile uint32_t *GPIO_ODR,int led)
{
    *GPIO_ODR |= (1U<<led);
}

void led_off (volatile uint32_t *GPIO_ODR,int led)
{
    *GPIO_ODR &=~ (1U<<led);
}

void led_toggle (volatile uint32_t *GPIO_ODR,int led)
{
    *GPIO_ODR ^= (1U<<led);
}

int led_is_on (volatile uint32_t GPIO_ODR,int led)
{
    return (GPIO_ODR & (1U<<led))!=0;
}

void led_show (volatile uint32_t GPIO_ODR)
{
    for(int i=0;i<8;i++)
    {
        if(GPIO_ODR&(1U<<i))
            printf("LED%d:ON \n",i);
        else
            printf("LED%d:OFF\n",i);    
    }
}

int led_read(volatile uint32_t reg,int led)
{
    if(reg & (1U << led))
        return 1;

    return 0;
}