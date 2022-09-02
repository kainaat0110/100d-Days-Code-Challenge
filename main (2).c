/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int reverse(int n);

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d" , &n);
    printf("The reverse of the number is : %d" , reverse(n));

    return 0;
}

int reverse(int n)
{
    int r , sum ;
    sum = 0;
    while(n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n /10;
    }
    return sum;
    
}