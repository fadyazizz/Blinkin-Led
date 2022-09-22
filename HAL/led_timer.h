#ifndef LED_TIMER_H
#define LED_TIMER_H

void timer_config(void (*ptr)(), int onTimeConfig,int offTimeConfig);
void app_timer();

#endif

