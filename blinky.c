
#include <avr/io.h>
#include <util/delay.h>



int main(){

    DDRB |= (1<<PINB7);
    

    while(1){

        PORTB ^= (1<<PINB7);
        _delay_ms(1000);
    }
}