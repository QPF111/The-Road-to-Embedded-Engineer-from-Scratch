#include "register.h"
#include "led.h"

int main(void)
{
led_init(&led_power);

led_on(&led_power);
led_show(&led_power);

led_toggle(&led_wifi);
led_show(&led_wifi);

led_off(&led_power);
led_show(&led_power);
}
