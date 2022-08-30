/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum , a;
    printf("Enter a number:");
    scanf("%d" , &a);
    for(int i=1; i<=a; i++)
    {
        sum = 0;
        sum = sum + i;
        return sum;

    }
    printf("%d" , sum);
    return 0;
}
