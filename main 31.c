/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sq(int a);

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d" , &a);
    printf("%d" , sq(a));
    

    return 0;
}
int sq(int a )
{
    int square =a*a;
    return square;
}
