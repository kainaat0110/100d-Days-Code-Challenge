/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , y , max;
    printf("Enter any two numbers:\n");
    scanf("%d %d" , &x , &y);
    max = (x > y ? x : y);
    while(1)
    {
        if(max % x == 0 && max % y == 0)
        {
            printf("%d" , max);
            break;
        }
        ++max;
    }
    
   
    return 0;
}
