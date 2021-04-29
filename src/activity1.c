#include "activity1.h"
void activity1_init(){

	//set B0 as output and intialise to output low
	
	DDRB|= (1<<PB0);
    PORTB&= ~(1<<PB0);
	
	//set B7 as input and intialise to output high
    
	DDRB&= ~(1<<PB7);
    PORTB|=(1<<PB7);
	
	//set B6 as input and intialise to output high
    
	DDRB&= ~(1<<PB6);
    PORTB|=(1<<PB6);
	}
    
	void activity1_loop()
    {
        if(!(PINB&(1<<PB6)) && !(PINB&(1<<PB7)))
            PORTB = PORTB|(1<<PB0);
        else
            PORTB&= ~(1<<PB0);
    }
