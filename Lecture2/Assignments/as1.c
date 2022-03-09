#include <stdio.h>

int main(void){

    //declares variables num, ones, tens;
    int num, tens, ones;

    //asks user for input
    printf ("Enter a 2-digit number: ");
    scanf ("%d", &num);

    //individually gets ones and tens digit
    ones = num % 10;
    num /= 10;
    tens = num % 10;

    //output
    printf ("Reverse: %d%d", ones,tens);

}
