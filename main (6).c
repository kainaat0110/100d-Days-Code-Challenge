/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int diff(int x , int y);

int main()
{
    int x , y;

    printf("Enter two positive numbers:\n");
    scanf("%d %d" , &x , &y);
    printf(" The difference of %d and %d is %d" , x , y , diff(x,y));
    return 0;
}

int diff(int x , int y)
{
    int diff = x - y;
    return diff;
}
