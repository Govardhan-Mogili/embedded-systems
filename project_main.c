#include "act2.h"
#include"activity1.h"
#include"act3.h"
#include"activity4.h"


void peripheral_init(void)
{
	activity1_init();
	InitADC();
	InitPWM();
	InitUART(103);
	
}

uint16_t temp;
char temp_data;
int main(void){
 peripheral_init();

while(1){
	activity1_loop();
	temp=ReadADC(3);
	_delay_ms(200);
	temp_data= OutPWM(temp);
	UARTwrite(temp_data);
}
return 0;
}
