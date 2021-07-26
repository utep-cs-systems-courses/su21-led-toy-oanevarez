#include <msp430.h>
#include "stateMachines.h"
void
__interrupt_vec(WDT_VECTOR) WDT(){	/* 250 interrupts/sec */
  //static char blink_count = 0;
  //if (++blink_count == 6){
    //turn_red();
    //turn_green(); //remember to sound_on and change state amchine and comment thiss
    //turn_green();
    // sound_on();
    //blink_count = 0;
  //}

  //turn_red();
  // turn_green();
  sound_on();
  
}
