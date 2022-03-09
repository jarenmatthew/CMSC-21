#include <stdio.h>

int main(void){

    //declares variables num, ones, tens;
    int num, hundreds, tens, ones;

    //asks user for input
    printf ("Enter a 3-digit number: ");
    scanf ("%d", &num);

    //individually gets ones, tens, hundreds digit
    ones = num % 10;
    num /= 10;
    tens = num % 10;
    num /= 10;
    hundreds = num % 10;

    //output
    printf ("Reverse: %d%d%d", ones,tens,hundreds);

}
