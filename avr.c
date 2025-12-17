#include "avr.h"

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>

#include "app.h"

void hw_init(void) {
  DDRA = (1 << DD3);

  wdt_enable(WDTO_250MS);
}

void mcu_enable_global_interrupt(void) {
  sei();
}

void mcu_disable_global_interrupt(void) {
  cli();
}

void gpio_high(void) {
  PORTA |= (1 << PORT3);
}

void gpio_low(void) {
  PORTA &= ~(1 << PORT3);
}

ISR(TIM1_COMPA_vect, ISR_BLOCK) {
  app_timer_interrupt();
}

void wdt_restart(void) {
  wdt_reset();
}
