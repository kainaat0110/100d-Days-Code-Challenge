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
    if(x>9 && x<=99)
    {
        printf("Its a two digit number");
    }
    else{
        printf("Its not a two digit number");
    }
    return 0;
 }
