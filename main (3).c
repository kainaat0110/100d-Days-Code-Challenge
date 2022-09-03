/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x , fibx , fiby , fibz;
    printf("Enter a number:");
    scanf("%d\t" , &x);
    fibz =  0;
    printf("%d" , fibz);
    fibx = 1;
    printf("%d\t" , fibx);
    for(int i =0; i <= x; i++)
    {
        fiby = fibx + fibz;
        fibz = fibx;
        fibx = fiby;
        printf("%d\t" , fiby);
    }
    

    return 0;
}
