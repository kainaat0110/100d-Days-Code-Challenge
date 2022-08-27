/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d" , &n);
    printf("%d" , fact(n));
    

    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    int factnm1 = fact(n-1);
    int fact = factnm1 *n;

}
