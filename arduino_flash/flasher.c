#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // set PORTB5 as an output
    DDRB = DDRB | (1 << DDB5);

    while(1) {
        // set PORTB5
        PORTB = PORTB | (1 << PORTB5);

        //wait
        _delay_ms(1000);

        //unset PORTB5
        PORTB = PORTB & ~(1 << PORTB5);

        // wait more for the next flash
        _delay_ms(1000);
    }
}