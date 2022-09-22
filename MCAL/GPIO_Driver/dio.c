#include "dio.h"


void enable_port(char port){
    switch(port){
        case PORT_A:
        SYSCTL_RCGCGPIO_R|=0x1;
        break;
        case PORT_B:
        SYSCTL_RCGCGPIO_R|=0x2;
        break;
        case PORT_C:
        SYSCTL_RCGCGPIO_R|=0x4;
        break;
        case PORT_D:
        SYSCTL_RCGCGPIO_R|=0x8;
        break;
        case PORT_E:
        SYSCTL_RCGCGPIO_R|=0x10;
        break;
        SYSCTL_RCGCGPIO_R|=0x20;
        break;
    }
}

void enable_pins(char port,int pin,int direction){
    switch(port){
        case PORT_A:
        GPIOA->DEN|=pin;
        GPIOA->DIR|=direction;
        break;
        case PORT_B:
        GPIOB->DIR|=direction;
        GPIOB->DIR|=direction;
        break;
        case PORT_C:
        GPIOC->DEN|=pin;
        GPIOC->DIR|=direction;
        break;
        case PORT_D:
        GPIOD->DEN|=pin;
        GPIOD->DIR|=direction;
        break;
        case PORT_E:
        GPIOE->DEN|=pin;
        GPIOE->DIR|=direction;
        break;
        GPIOF->DEN|=pin;
        GPIOF->DIR|=direction;
        break;
    }
}




void toggle_pin(char port, int pin){

     switch(port){
        case PORT_A:
        GPIOA->DATA^=pin;
        break;
        case PORT_B:
        GPIOB->DATA^=pin;
        break;
        case PORT_C:
        GPIOC->DATA^=pin;
        break;
        case PORT_D:
        GPIOD->DATA^=pin;;
        break;
        case PORT_E:
        GPIOE->DATA^=pin;
        break;
        GPIOF->DATA^=pin;
        break;
    }

}