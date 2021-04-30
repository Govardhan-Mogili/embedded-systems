#include "act2.h"
#include"activity1.h"
#include"act3.h"
uint16_t temp;
char temp_data;
void peripheral_init(void)
{
	InitADC();
	InitPWM();
	InitUART(103);
int main(void){
	peripheral_init();
activity1_init();
InitADC();
void InitPWM();
while(1){
	activity1_loop();
	temp=ReadADC(3);
	_delay_ms(200);
	OutPWM(temp);
}
return 0;
}
