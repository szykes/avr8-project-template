#include "avr.h"

#include "mock.h"

void mcu_sei(void) {
  MOCK_RECORD();
}

void mcu_cli(void) {
  MOCK_RECORD();
}

void gpio_high(void) {
  MOCK_RECORD();
}

void gpio_low(void) {
  MOCK_RECORD();
}
