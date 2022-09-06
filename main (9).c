/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int marks[2][4]={{79,92,78,56},{64,97,90,75}};
    printf("Marks of first student are :");
    for(int i = 0 ; i <= 3 ; i++)
    {
        printf("%d\n" , marks[0][i]);
    } 
    printf("\n");
    printf("Marks of second student are : ");
    for(int i = 0 ; i <= 3 ; i++)
    {
        printf("%d\n" , marks[1][i]);
    }

    return 0;
}
