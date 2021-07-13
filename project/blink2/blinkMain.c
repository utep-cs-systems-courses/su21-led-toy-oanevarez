//Alternate LEDs from Off, Green, and Red
#include <msp430.h>
#include "../timerLib/libTimer.h"
#include "led.h"  

int main(void) {
  configureClocks();		/* setup master oscillator, CPU & peripheral clocks */
  led_init(); //enable led??
  enableWDTInterrupts();	/* enable periodic interrupt */

  or_sr(0x18);		/* CPU off, GIE on */
}
