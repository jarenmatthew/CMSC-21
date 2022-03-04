#include <stdio.h>

int main(void){

    //declares multiple variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    //asks user for input and assigns value to variables
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
   
    //calculates the numerator and denominator
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    //prints result
    printf("The sum of %d/%d\n", result_num, result_denom);

    return 0;
}
