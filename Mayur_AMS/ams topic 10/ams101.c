#include <stdint.h>
#include <stdio.h>
#include <avr/io.h> 
#include <avr/interrupt.h>
#include <util/delay.h>
#include <cpu_speed.h>

#include <graphics.h>
#include <macros.h>
#include "lcd_model.h"

//	(a) Implement a function called uart_setup which requires no arguments and
//	returns no value.
void uart_setup(){


	//	(a.a) Set the data transmission rate to 9600 bits per second,
	//	using the formula provided in the Topic 10 Technical Notes.
	UBRR1 = (F_CPU / 8 / 9600 - 1) / 2;
	//	(a.b) Set the UART speed to normal speed.
	UCSR1A = (0<<U2X1);
	//	(a.c) Enable receive and transmit, but do not enable any UART-related
	//	interrupts.
	UCSR1B = (1<<RXEN1) | (1<<TXEN1);
	//	(a.d) Set the character size to 8 bits, with odd parity
	//	and 1 stop bit.
	UCSR1C = (1<<UCSZ11) | (1<<UCSZ10) | (1<<UPM11) | (1<<UPM10);
//	(b) End of function uart_setup

}
int main(void) {
	uart_setup();

	for ( ;; ) {}
}
