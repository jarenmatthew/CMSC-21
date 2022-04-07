/**********************
 TABLE OF POWERS OF TWO
 **********************/

#include <stdio.h>

int main(void)
{
    int n = 10, i=0, twoToN = 1;

    printf ("TABLE OF POWERS OF TWO\n\n");
    printf ("n     2 to the n\n");
    printf ("--    ----------\n");

    while (i <= n)
    {
        if (i == 0)
            twoToN = 1;
        else
            twoToN *= 2;

        printf ("%d\t%d\n", i, twoToN);

        i++;
    }
}
