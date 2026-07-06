#include "led.h"

int main(void)
{
    uint32_t reg = 0;

    led_on(&reg, 1);

    led_toggle(&reg, 5);

    led_show(reg);

    return 0;
}