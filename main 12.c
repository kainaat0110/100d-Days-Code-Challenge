/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x ;
    printf("Enter a number:\n");
    scanf("%d" , &x );
    if(x%2==0){
        printf("The number is an even number");
    }
    else{
    printf("The number is not an even number");
    }
    return 0;
 }
