/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int calculatepercent(int arr[][4] , int n , int m);
int main()
{
    int marks[2][4];
    printf("Enter first student marks :");
    scanf("%d %d %d %d" , &marks[0][0] , &marks[0][1] , &marks[0][2] , &marks[0][3]);
    printf("Enter second student marks :");
    scanf("%d %d %d %d" , &marks[1][0] , &marks[1][1] , &marks[1][2] , &marks[1][3]);
    printf("Marks of first student are :");
    for(int i = 0 ; i <= 3 ; i++)
    {
        printf("%d\n" , marks[0][i]);
    } 
    printf("Percentage of first student is: %d\n" , calculatepercent(marks , 0 , 4));
    printf("\n");
    printf("Marks of second student are : ");
    for(int i = 0 ; i <= 3 ; i++)
    {
        printf("%d\n" , marks[1][i]);
    }
    printf("Percentage of second student is: %d\n" , calculatepercent(marks , 1 ,4));

    return 0;
}
int calculatepercent(int arr[][4], int n, int m)
{
    int sum , percent;
    sum = 0;
    for(int i = 0 ; i <= 3; i++)
    {
        sum = sum + arr[n][i]; 
    }
    percent = sum / 4;
    return percent;
}