/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void storetable(int arr[][10] , int n , int m , int number);

int main()
{
    int table[2][10];
    storetable(table , 0 , 10 , 2);
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t" , table[0][i]);
    }
    storetable(table , 1 , 10 , 3);
    printf("\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t" , table[1][i]);
    }


    return 0;
}
void storetable(int arr[][10] , int n , int m, int number)
{
    for(int i =0; i < m ; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}