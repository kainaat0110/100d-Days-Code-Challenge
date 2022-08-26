/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter your marks:");
    scanf("%d" , &x);
    if(x>30 && x<=100)
    {
        printf("You're Pass!");
    }
    else if(x<=30 && x>0)
    {
        printf("You're Fail.");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
 }
