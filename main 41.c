/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int convert(int x);

int main()
{
    int x;
    printf("Enter a temperature:");
    scanf("%d" , &x);
    printf("Your temperature in fahrenheits is %d" , convert(x));
}
int convert(int x)
{
    int fah = x* (9/5) + 32;
    return fah;
}