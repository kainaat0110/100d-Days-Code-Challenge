/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,table;
    printf("Enter a number:");
    scanf("%d" , &n);
    for(int i=1; i<=10; i++)
    {
        table = n*i;
        printf("%d\n" , table);
    }

    return 0;
}
