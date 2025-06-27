#ifndef AVR_H_
#define AVR_H_

void hw_init(void);

void mcu_cli(void);
void mcu_sei(void);

void gpio_high(void);
void gpio_low(void);

void wdt_restart(void);

#endif // AVR_H_
