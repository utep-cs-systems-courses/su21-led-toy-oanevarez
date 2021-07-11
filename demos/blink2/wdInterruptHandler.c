#include <msp430.h>
#include "stateMachines.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){	/* 250 interrupts/sec */
  static char blink_count = 0;
  if (++blink_count == 125){ //originally 125
    //state_advance();//blinks
    //call another state
    turn_on_test();
    blink_count = 0;
  }
}
