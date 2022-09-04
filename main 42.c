/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int printarray(int arr[], int size);
int reversearray(int arr[] , int start , int end);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printarray(arr , n);
    reversearray(arr , 0 , n-1);
    printf("The reverse of an array is\n");
    printarray(arr , n);

    return 0;
}
int printarray(int arr[] , int size)
{
    for(int i = 0; i < size ; i++)
    {
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
int reversearray(int arr[], int start , int end)
{
    int temp;
    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}