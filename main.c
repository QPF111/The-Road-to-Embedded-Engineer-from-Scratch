#include "led.h"

int main(void)
{
    volatile uint32_t GPIOA_ODR = 0;

    led_on(&GPIOA_ODR, 1);

    led_toggle(&GPIOA_ODR, 5);

    led_show(GPIOA_ODR);

    return 0;
}