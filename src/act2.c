#include "act2.h"
void InitADC()
{
    // Select Vref=AVcc
    ADMUX= (1<<REFS0);
    //set prescaller to 128 and enable ADC
     ADCSRA =(1<<ADEN) |(7<<ADPS0);
}
uint16_t ReadADC(uint8_t ch)
{
    //select ADC channel with safety mask
    ADMUX&= 0xf8;
    //single conversion mode
    ch= ch&0b00000111;
    ADMUX|= ch;
    ADCSRA|= (1<<ADSC);
    // wait until ADC conversion is complete
    while(!(ADCSRA &(1<<ADIF)));
    ADCSRA|=(1<<ADIF);
    return ADC;
}
