

#include "led_timer.h"
#include "dio.h"
#include "timer.h"
int on=0;
int onTime;
int offTime;

void app_timer(){
    toggle_pin(PORT_A,PIN_1);
    
    if(on==1){
        on=0;
        init_timer(app_timer,offTime);
        return;
    }
    on=1;
    init_timer(app_timer,onTime);

    
}

void timer_config(void (*ptr)(), int onTimeConfig,int offTimeConfig){
    onTime=onTimeConfig;
    offTime=offTimeConfig;
    init_timer(ptr,onTime);
} 