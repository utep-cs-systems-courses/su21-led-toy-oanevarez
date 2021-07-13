#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"

void turn_red() //button s1 turns on red led, and makes buzz noise
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

void turn_green() //button s2 turns on green led, and makes buzz noise
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

void sound_on()
{
  if(switch_state_down_3){
    buzzer_set_period(2109);
  }else{
    buzzer_set_period(0);
  }
}
