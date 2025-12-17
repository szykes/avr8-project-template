#ifndef AVR_H_
#define AVR_H_

void hw_init(void);

void mcu_enable_global_interrupt(void);
void mcu_disable_global_interrupt(void);

void gpio_high(void);
void gpio_low(void);

void wdt_restart(void);

#endif // AVR_H_
