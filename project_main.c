#include "act2.h"
#include"activity1.h"
#include"act3.h"
uint16_t temp;
int main(void){
activity1_init();
InitADC();
while(1){
	activity1_loop();
	temp=ReadADC(3);
	_delay_ms(200);
	OutPWM(temp);
}
return 0;
}
