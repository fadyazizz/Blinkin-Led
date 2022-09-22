#ifndef DIO_H
#define DIO_H
#include "TM4C123.h"
// address + offset of RCGCGPIO
# define SYSCTL_RCGCGPIO_R (*(( volatile unsigned long *)0x400FE000+0x608))

//GPIO ports addresses
#define GPIO_PORTA 0x40004000
#define GPIO_PORTB 0x40005000
#define GPIO_PORTC 0x40006000
#define GPIO_PORTD 0x40007000
#define GPIO_PORTE 0x40024000
#define GPIO_PORTF 0x40025000

// addresses of gpio_den
#define GPIO_DEN_OFFSET 0x51C
# define GPIO_PORTA_DEN (*(( volatile unsigned long *)GPIO_PORTA+GPIO_DEN_OFFSET))
# define GPIO_PORTB_DEN (*(( volatile unsigned long *)GPIO_PORTB+GPIO_DEN_OFFSET))
# define GPIO_PORTC_DEN (*(( volatile unsigned long *)GPIO_PORTC+GPIO_DEN_OFFSET))
# define GPIO_PORTD_DEN (*(( volatile unsigned long *)GPIO_PORTD+GPIO_DEN_OFFSET))
# define GPIO_PORTE_DEN (*(( volatile unsigned long *)GPIO_PORTE+GPIO_DEN_OFFSET))
# define GPIO_PORTF_DEN (*(( volatile unsigned long *)GPIO_PORTF+GPIO_DEN_OFFSET))

//addresses of DIR
#define GPIO_DIR_OFFSET 0x400
# define GPIO_PORTA_DIR (*(( volatile unsigned long *)GPIO_PORTA+GPIO_DIR_OFFSET))
# define GPIO_PORTB_DIR (*(( volatile unsigned long *)GPIO_PORTB+GPIO_DIR_OFFSET))
# define GPIO_PORTC_DIR (*(( volatile unsigned long *)GPIO_PORTC+GPIO_DIR_OFFSET))
# define GPIO_PORTD_DIR (*(( volatile unsigned long *)GPIO_PORTD+GPIO_DIR_OFFSET))
# define GPIO_PORTE_DIR (*(( volatile unsigned long *)GPIO_PORTE+GPIO_DIR_OFFSET))
# define GPIO_PORTF_DIR (*(( volatile unsigned long *)GPIO_PORTF+GPIO_DIR_OFFSET))


//addresses of Data
# define GPIO_PORTF_DATA_R (*(( volatile unsigned long *)0x40025038)) 

//ports names
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
#define PORT_E 'E'
#define PORT_F 'F'

//pins values
#define PIN_0 0x01
#define PIN_1 0x02
#define PIN_2 0x04
#define PIN_3 0x08
#define PIN_4 0x10
#define PIN_5 0x20

void enable_port(char port);
void enable_pins(char port, int pinNumber, int direction);
void toggle_pin(char port, int pin);



  
//init a specific port method
#endif