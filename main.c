#include "avr.h"
#include "app.h"

int main()
{
  hw_init();
  mcu_sei();

  while(1) {
    app_main();
    wdt_restart();
  }
}
