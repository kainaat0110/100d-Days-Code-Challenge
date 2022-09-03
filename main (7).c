/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int table(int arr[][10] , int m , int n , int num);

int main()
{
    int tables[2][10];
    table(tables , 0 , 10 , 2);
    table(tables , 1 , 10 , 3);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t" , tables[0][i]);
    }
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t" , tables[1][i]);
    }
    

    return 0;
}
int table(int arr[][10] , int m , int n , int num)
{
    for(int i = 1; i <= 10; i++)
    {
        arr[n][i] = num * i;
    }
}