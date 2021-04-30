#include "act2.h"
#include"activity1.h"
#include"act3.h"
#include"activity4.h"
uint16_t temp;
int main(void){
activity1_init();
InitADC();
void InitPWM();
while(1){
	activity1_loop();
	temp=ReadADC(3);
	_delay_ms(200);
	temp_data= OutPWM(temp);
	UARTwrite(temp_data);
}
return 0;
}
