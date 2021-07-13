#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"

void turn_red()
{
  if(switch_state_down_1){
    red_on=1;
    led_changed=1;
    led_update();
  }else{
    red_on=0;
    led_changed=1;
    led_update();
  }
}

void turn_green()
{
  if(switch_state_down_2){
    green_on=1;
    led_changed=1;
    led_update();
  }else{
    green_on=0;
    led_changed=1;
    led_update();
  }
}
