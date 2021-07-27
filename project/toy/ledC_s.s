	#include <msp430.h>
	#include "led.h"

	.arch msp430g2553
	.p2align 1,0
	.text
	.extern P1DIR
	.extern P1OUT
	.extern LEDS
	.extern LED_RED
	.extern LED_GREEN
	.global led_changed

	.data

red_on:
	.byte 0
green_on:
	.byte 0
led_changed:
	.byte 0
ledFlags:
	.byte 0
redVal:
	.byte 0
	.byte LED_RED
greenVal:
	.byte 0
	.byte LED_GREEN

led_init:
	bis LEDS, P1DIR
	mov #1, led_changed
	call #led_update

led_update:
	cmp #1, led_changed
	jnz out
	mov &redVal, r12
	mov &greenVal, r13
	bis ledFlags, 0(r12)
	bis ledFlags, 0(r13)
	xor #0xff, LEDS
	and ledFlags, P1OUT
	bis ledFLags, P1OUT
	mov #0, led_changed
	
out:
	


	
