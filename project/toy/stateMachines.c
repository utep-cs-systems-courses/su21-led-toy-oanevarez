#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"

void turn_red() //button s1 turns on red led, and makes buzz noise
{
    red_on=1;
    led_changed=1;
    led_update();
}

void turn_green() //button s2 turns on green led, and makes buzz noise
{
  green_on=1;
  led_changed=1;
  led_update();
}

void turn_greenOff(){
  green_on =0;
  led_changed =1;
  led_update();
}

void turn_redOff(){
  red_on =0;
  led_changed =1;
  led_update();
}


void sound_on(){
  if(switch_state_down_1){
    buzzer_set_period(2109);
    turn_red();
  }else if(switch_state_down_2){
    buzzer_set_period(1674);
    turn_green();
  }else if(switch_state_down_3){
    buzzer_set_period(1408);
    turn_green();
  }else if(switch_state_down_4){
    buzzer_set_period(2246);
    turn_red();
  }else{
    buzzer_set_period(0);
    turn_redOff();
    turn_greenOff();
  }
  //buzzer_set_period(0);
}
