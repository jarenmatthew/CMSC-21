#include <stdio.h>

int main(void){
    
    //declares variables
    int i;
    float x;

    //assigns value to variables
    i = 40;
    x = 839.21f;

    //prints result
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);

}
