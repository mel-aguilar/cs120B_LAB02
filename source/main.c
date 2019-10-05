/*	Author: magui051
 *  Partner(s) Name: Chris
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;	

	unsigned char tmpA0 = 0x00; 
	unsigned char tmpA1 = 0x00; 
	unsigned char tmpA2 = 0x00; 
	unsigned char tmpA3 = 0x00; 
	unsigned char cntavail = 4; 
	PORTC = cntavail;

    /* Insert your solution below */
    while (1) {
	//tmpA = PINA & 0x01;
	//tmpB = PINA & 0x02;
	
	if (tmpA0 == 0x01) {
		--cntavail;
	}
	if (tmpA1 == 0x02) {
		--cntavail;
	}
	if (tmpA2 == 0x04) {
		--cntavail;
	}
	if (tmpA3 == 0x08) {
		--cntavail;
	}
	  
	 PORTC = cntavail;
	 cntavail = 4;
    }
    return 1;
}
