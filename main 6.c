/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , y , mul;
    printf("Enter two numbers:");
    scanf("%d %d" , &x , &y);
    mul = x * y;
    printf("Multpication of %d and %d is %d" , x , y , mul);

    return 0;
}
