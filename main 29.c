/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a , int b);

int main()
{
    int a , b;
    printf("Enter two numbers:");
    scanf("%d %d" , &a , &b);
    printf("%d" , sum(a , b));
    

    return 0;
}
int sum(int a , int b)
{
    return a + b;
    

}
