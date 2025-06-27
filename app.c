#include "app.h"

#include "avr.h"

void app_timer_interrupt(void) {
}

void app_main(void) {
  gpio_high();
  gpio_low();
}
