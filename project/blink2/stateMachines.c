#include <msp430.h>
#include "stateMachines.h"
#include "led.h"


void turn_red()
{
  red_on=1;
  led_changed=1;
  led_update();
}
