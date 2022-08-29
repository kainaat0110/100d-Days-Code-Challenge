/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int a);

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d" , &a);
    printf("%d" , sum(a));
    

    return 0;
}
int sum(int a )
{
    if(a==1)
    {
        return 1;
        
    }
    int sumnm1 = sum(a-1);
    int sum = sumnm1 + a;

    

}
