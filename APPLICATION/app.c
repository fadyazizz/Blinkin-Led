
#include "dio.h"
#include "led_timer.h"
#include "app.h"
void setup(){
    enable_port(PORT_A); // Enable clock for PORTA
    enable_pins(PORT_A, PIN_1,PIN_1);  // Enable PORTA Pin1 as a digital pins
    timer_config(app_timer,1,9); //setting the on time to be 2 seconds and the offtime to be 10, and passing the callback function
}


void update(){
}

