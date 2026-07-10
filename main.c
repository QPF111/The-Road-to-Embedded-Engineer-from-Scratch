#include "register.h"
#include "led.h"

int main(void)
{
led_init();

led_on();
led_show();

led_toggle();
led_show();

led_off();
led_show();
}
