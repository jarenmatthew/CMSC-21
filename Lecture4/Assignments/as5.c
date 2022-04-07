/********************
 ONE - MONTH CALENDAR
 ********************/

#include <stdio.h>

int main(void)
{
    int n, day, i = 0;

    printf ("Enter number of days in month: ");
    scanf ("%d", &n);

    if (n <= 31 && n >= 28)
    {
        printf ("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf ("%d", &day);

        if (day <= 7 && day >= 1)
        {
            printf ("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
            printf ("---------------------------------------------------");

            while (i <= (n + day - 1))
            {
                // prints spaces or indention before starting day of the month
                if (i < day){
                    printf ("\t");
                }
                // prints days in the month with an adjustment based on the starting day of the month
                else{
                    printf ("%d\t", i - day + 1);
                }

                // prints a new line when it reaches the 7th day of the week
                if (i % 7 == 0){
                    printf("\n");
                }

                i++;
            }
        }
        else{
            printf("Invalid. Try again.");
        }
    }

    else{
        printf("Invalid. Try again.");
    }
}
