#include "dio.h"
#include "app.h"



void setup(){
enable_port(PORT_A); // Enable clock for PORTF
enable_pins(PORT_A, PIN_1+PIN_2+PIN_3,PIN_1+PIN_2+PIN_3);  // Enable PORTF Pin1, 2 and 3 as a digital pins
// GPIOF->DIR=0x0E;
// GPIO_PORTF_DIR  = 0x0E; //set the direction 
SysTick->LOAD = 15999999*2; // one second delay relaod value
	SysTick->CTRL = 7 ; // enable counter, interrupt and select system bus clock 
	SysTick->VAL  = 0;  
}


void update(){
// GPIO_PORTF_DATA_R |= 0x02;



}

void SysTick_Handler(void)
{

    toggle_pin(PORT_A,PIN_1);
  
}