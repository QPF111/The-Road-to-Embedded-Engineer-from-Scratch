#include <stdio.h>
#include "led.h"

void led_on (uint32_t *reg,int led)
{
    *reg |= (1U<<led);
}

void led_off (uint32_t *reg,int led)
{
    *reg &=~ (1U<<led);
}

void led_toggle (uint32_t *reg,int led)
{
    *reg ^= (1U<<led);
}

int led_is_on (uint32_t reg,int led)
{
    return (reg & (1U<<led))!=0;
}

void led_show (uint32_t reg)
{
    for(int i=0;i<8;i++)
    {
        if(reg&(1U<<i))
            printf("LED%d:ON\n",i);
        else
            printf("LED%d:OFF\n",i);    
    }
}