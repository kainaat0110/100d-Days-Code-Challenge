/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , y, Area;
    printf("Enter the side of the rectangle:\n");
    scanf("%d %d" , &x , &y);
    Area = x*y;
    printf("The Area of Rectangle is %d\n" , Area);

    return 0;
}
