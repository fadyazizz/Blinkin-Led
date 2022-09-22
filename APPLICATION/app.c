
#include "dio.h"
#include "led_timer.h"
#include "app.h"
void setup(){
    enable_port(PORT_B); // Enable clock for PORTA
    enable_pins(PORT_B, PIN_1,PIN_1);  // Enable PORTA Pin1 as a digital pins
    timer_config(2,3); //setting the on time to be 2 seconds and the offtime to be 10, and passing the callback function
}


void update(){
}

