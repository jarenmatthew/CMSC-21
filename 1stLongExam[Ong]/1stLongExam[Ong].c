
// NUMBER 8
#include <stdio.h>

int main()
{
    int b = 3, a =2;

    // 8b a
    if ((a == 2) && (b == 3)){
        printf( "*****\n" );
    }
    else{
        printf( "-----" );
    }
    printf( ">>>>>\n" );
    printf( "<<<<<" );


    // 8b b
    if ((a == 2) && (b == 3)){
        printf( "*****\n" );
    }
    else{
        printf( "-----" );
        printf( ">>>>>\n" );
        printf( "<<<<<" );
    }


    // 8b c
    if ((a == 2) && (b == 3)){
        printf( "*****\n" );
    }
    else{
        printf( "-----" );
        printf( ">>>>>\n" );
    }
    printf( "<<<<<" );

}


// NUMER 9

#include <stdio.h>
int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    //iterates until "cont" is not equal to 'y'
    while(cont == 'y'){
        printf("Enter square size: ");
        scanf("%d", &size);

        //prints square
        for( row = 0 ;row < size ; row++){
            for(column = 0 ; column < size  ;column++){

                //prints stars or asterisks on the sides
                if (row == 0 || column == 0 || row == size -1|| column == size -1){
                    printf("*");
                }
                //makes the square hollow
                else{
                    printf(" ");
                }
            }
            //new line after inner loop
            printf("\n");
        }

        //asks user if he/she wants to continue
        printf("Print another square? Enter y or n: ");
        scanf (" %c",&cont);

        if (cont == 'n'){
            printf ("END");
        }else if ((cont != 'n') && (cont != 'y')){
            printf("Not a valid choice. \n");

            printf("Print another square? Enter y/n: ");
            scanf (" %c", &cont);
        }
    }
    return 0;
}


// NUMBER 10
#include <stdio.h>
#include <math.h>
int main(void){
    double x,y,y_new,tol,diff;

    tol = 0.00001;
    y = 1;
    diff = 1;

    printf("Enter a number: ");
    scanf("%lf", &x);

    // loops until absolute value of yn+1 - y is less than or equal to the tolerance
    while(fabs(diff) > tol){

        //iterative method to finding the sqrt
        y_new = 0.5*(y+(x/y));

        // yn+1 - y
        diff = y - y_new;


        y = y_new;
    }

    printf(" The square root of %lf is %lf",x,y_new);
}
