/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d" , &x);
    if(x%2!=0)
    {
        printf("Its an odd number");
    }
    else{
        printf("Its not an odd number");
    }
    return 0;
 }
