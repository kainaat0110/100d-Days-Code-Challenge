/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x ;
    float Area;
    printf("Enter the radius of circle:\n");
    scanf("%d" , &x );
    Area = 3.14*x*x;
    printf("The Area of Circle is %f\n" , Area);

    return 0;
}
