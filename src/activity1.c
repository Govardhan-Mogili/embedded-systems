/** 
* @file activity1.h
* @author 260838 (you@domain.com)
* @brief Changes the state of LED
* @version 0.1
* @date 2021-04-27
*
* @copyright Copyright (c) 2021
*
*/
#include "activity1.h"
void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void activity1_init(void){

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
