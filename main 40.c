/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int countodd(int arr[], int n);

int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("%d" , countodd(arr , 6));

    return 0;
}
int countodd(int arr[], int n)
{
    int count = 0;
    for(int i = 0; i <= n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}