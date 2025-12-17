#include "avr.h"

#include "mock.h"

void mcu_enable_global_interrupt(void) {
  MOCK_RECORD();
}

void mcu_disable_global_interrupt(void) {
  MOCK_RECORD();
}

void gpio_high(void) {
  MOCK_RECORD();
}

void gpio_low(void) {
  MOCK_RECORD();
}
