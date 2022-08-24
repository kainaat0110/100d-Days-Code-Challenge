/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , y , z;
    float avg;
    printf("Enter three number:\n");
    scanf("%d %d %d" , &x , &y , &z );
    avg = (x+y+z)/3;
    printf("The average of three numbers is %f" , avg);
    return 0;
 }
