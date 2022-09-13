/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[3]={5,7,9};
    for(int i =0; i< 3;i++)
    {
        for(int j = i+1 ; j < 3; j++)
        {
            if(array[j] < array[i])
            {
                int temp;
                temp = array[i];
                array[i] = array [j];
                array[j] = temp;
            }
        }
    }
    printf("Array i Ascending order is:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\t" , array[i]);

    }
    
    return 0;
}
