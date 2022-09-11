/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter any 5 elements of an array: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d" , &a[i]);
    }
    
    for(int i = 0; i<5 ; i++)
    {
        for(int j = i+1 ; j < 5; j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t" , a[i]);
    }
    return 0;
}
