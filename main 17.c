/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char x;
    printf("Enter an Alphabet:");
    scanf("%s" , &x);
    if(x>='a' && x<='z')
    {
        printf("Its a lowercase Alphabet");
    }
    else if(x>='A' && x<='Z')
    {
        printf("Its a uppercase Alphabet");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
 }
