#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // set LED pin PB5 to output
  DDRB |= (1<<PB5);

  while(1) {
    // toggle the LED pin PB5 and hence the LED
    PORTB ^= (1<<PB5);
    // use build in delay function to delay for 100ms
    _delay_ms(1000);
  }
}
