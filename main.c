/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num , value;
    printf("Enter number of rows: ");
    scanf("%d" , &num);
    for(int i = 0; i < num ; i++)
    {
        for(int j = 0 ; j < (num - i); j++)
        {
            printf(" ");
        }
        value = 1;
        for(int k = 0; k <= i; k++)
        {
            printf("%d  " , value);
            value = (value * (i - k))/(k+1);
        }
        printf("\n");
    }

    return 0;
}
