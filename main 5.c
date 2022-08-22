/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a , b , c;
    printf("Enter three numbers:");
    scanf("%d %d %d" , &a , &b , &c);
    if(a>b && a>c)
    {
        printf("The largest number is %d" , a);
    }
    else if(b>a && b>c)
    {
        printf("The largest number is %d", b);
    }
    else(c>a && c>b);
    {
        printf("The largest number is %d" , c);
    }
    return 0;
}
