    /********************************
 PRINTS TWO-DIGIT NUMBER IN WORDS
 ********************************/

#include <stdio.h>

int main(void)
{
    int i = 11;

    while (i < 10){
        printf ("%d", i);
        i++;
    }

    for (; i < 10; i++)
    {
        printf ("%d", i);
    }

    do{
        printf("%d",i);
        i++;
    }while(i < 10);
}
