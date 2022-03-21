/********************************
 PRINTS TWO-DIGIT NUMBER IN WORDS
 ********************************/

#include <stdio.h>

int main(void)
{
    int ones, tens;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &ones, &tens);

    printf("Number entered in words: ");

    switch (ones)
    {
        // prints for tens digit
        case 1:
            // special cases for 11-19
            if (tens == 0)
            {
                printf("ten");
                exit(0);
            }
            if (tens == 1)
            {
                printf("eleven");
                exit(0);
            }
            if (tens == 2)
            {
                printf("twelve");
                exit(0);
            }
            if (tens == 3)
            {
                printf("thirteen");
                exit(0);
            }
            if (tens == 4)
            {
                printf("fourteen");
                exit(0);
            }
            if (tens == 5)
            {
                printf("fifteen");
                exit(0);
            }
            if (tens == 6)
            {
                printf("sixteen");
                exit(0);
            }
            if (tens == 7)
            {
                printf("seventeen");
                exit(0);
            }
            if (tens == 8)
            {
                printf("eighteen");
                exit(0);
            }
            if (tens == 9)
            {
                printf("nineteen");
                exit(0);
            }

        case 2:
            printf("twenty"); break;
        case 3:
            printf("thirty"); break;
        case 4:
            printf("forty"); break;
        case 5:
            printf("fifty"); break;
        case 6:
            printf("sixty"); break;
        case 7:
            printf("seventy"); break;
        case 8:
            printf("eighty");break;
        case 9:
            printf("ninety"); break;
    }


    // prints for ones digit
    switch (tens)
    {
        case 1: printf("-one"); break;
        case 2: printf("-two"); break;
        case 3: printf("-three"); break;
        case 4: printf("-four"); break;
        case 5: printf("-five"); break;
        case 6: printf("-six"); break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine"); break;
    }
}
