#include <stdio.h>
#include "led.h"

void led_on(GPIO_TypeDef *gpio, int pin)
{
    gpio->ODR |= (1U << pin);
}

void led_off(GPIO_TypeDef *gpio, int pin)
{
    gpio->ODR &= ~(1U << pin);
}

void led_toggle (GPIO_TypeDef *gpio, int pin)
{
    gpio->ODR ^= (1U << pin);
}

int led_is_on (GPIO_TypeDef *gpio, int pin)
{
    return (gpio->ODR & (1U << pin)) != 0;
}

void led_show (GPIO_TypeDef *gpio)
{
    for(int i=0;i<8;i++)
    {
        if(gpio->ODR&(1U<<i))
            printf("LED%d:ON \n",i);
        else
            printf("LED%d:OFF\n",i);    
    }
}

int led_read(GPIO_TypeDef *gpio, int pin)
{
    if(gpio->ODR & (1U << pin))
        return 1;
    else
        return 0;
}

void gpio_init_output(GPIO_TypeDef *gpio, int pin)
{
    gpio->MODER &= ~(3U << (pin * 2));

    gpio->MODER |=  (1U << (pin * 2));
}