#include "register.h"
#include "led.h"

int main(void)
{
gpio_init_output(&GPIOA, 1);

led_on(&GPIOA, 1);
led_show(&GPIOA);

led_toggle(&GPIOA, 1);
led_show(&GPIOA);

led_off(&GPIOA, 1);
led_show(&GPIOA);
}
