/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n , x;

    printf("Enter a number:");
    scanf("%d" , &n);
    while(n%2 == 0)
    {
        printf("Enter a number:");
        scanf("%d" , &x);
        n = x;
    }
    

    return 0;
}
