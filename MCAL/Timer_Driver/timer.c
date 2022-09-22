

#include "dio.h"
#include "timer.h"

int prescalerTimer=0;
int interval=0;
void (*callback_ptr)();
void init_timer(void (*ptr)(),int numberOfSeconds){
    interval=numberOfSeconds;
    SysTick->LOAD = 15999999; // one second delay relaod value
	SysTick->CTRL = 7 ; // enable counter, interrupt and select system bus clock 
	SysTick->VAL  = 0;
    setCallBack(ptr); //setting the call back  
}
int prescaler(){
    if(interval==prescalerTimer){
        prescalerTimer=0;
        return 1;
    }
    prescalerTimer++;
    return 0;
}
void SysTick_Handler(void)
{

    if (prescaler()==1)
    {
       (*callback_ptr)();
    }
    
  
}

void setCallBack( void (*ptr)()){
    callback_ptr=ptr;
}