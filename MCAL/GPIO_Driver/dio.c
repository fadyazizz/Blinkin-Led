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
        case PORT_F:
        SYSCTL_RCGCGPIO_R|=0x20;
        break;
    }
}

void enable_pins(char port,int pin,int direction){
    switch(port){
        case PORT_A:
        GPIO_PORTA_DEN|=pin;
        GPIO_PORTA_DIR|=direction;
        break;
        case PORT_B:
        GPIO_PORTB_DEN|=pin;
        GPIO_PORTB_DIR|=direction;
        break;
        case PORT_C:
        GPIO_PORTC_DEN|=pin;
        GPIO_PORTC_DIR|=direction;
        break;
        case PORT_D:
        GPIO_PORTD_DEN|=pin;
        GPIO_PORTD_DIR|=direction;
        break;
        case PORT_E:
        GPIO_PORTE_DEN|=pin;
        GPIO_PORTE_DIR|=direction;
        break;
        case PORT_F:
        GPIO_PORTF_DEN|=pin;
        GPIO_PORTF_DIR|=direction;
        break;
    }
}




void toggle_pin(char port, int pin){

     switch(port){
        case PORT_A:
        GPIO_PORTA_DATA_R^=pin;
        break;
        case PORT_B:
        GPIO_PORTB_DATA_R^=pin;
        break;
        case PORT_C:
        GPIO_PORTC_DATA_R^=pin;
        break;
        case PORT_D:
        GPIO_PORTD_DATA_R^=pin;;
        break;
        case PORT_E:
        GPIO_PORTE_DATA_R^=pin;
        break;
        case PORT_F:
        GPIO_PORTF_DATA_R^=pin;
        break;
    }

}