/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char name[10][2];
    for(int i = 0 ; i < 10; i++)
    {
        printf("Enter Your First Name , Last Name:\n ");
        scanf("%c %c" , &name[i][0] , &name[i][1]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Name is : %c %c" , name[i][0] , name[i][1]);
    }
    

    return 0;
}
