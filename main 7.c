/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n , a , b , c;
    printf("Enter a number");
    scanf("%d", &n);
    a =  1;
    b = 1;
    for(int i = 0; i <= n -2; i++)
    {
        printf("%d\t" , a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
