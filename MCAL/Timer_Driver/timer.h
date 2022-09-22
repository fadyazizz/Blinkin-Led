#ifndef TIMER_H
#define TIMER_H
void extern  (*callback_ptr)();
void setCallBack( void (*ptr)());
void init_timer(void (*ptr)(),int numberOfSeconds);
int prescaler();
#endif