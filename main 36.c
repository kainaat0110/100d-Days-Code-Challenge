/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void Hot();
void Cold();
int main()
{
    int x;
    printf("Enter a Temperature:");
    scanf("%d" , &x);
    if(x>=25)
    {
        Hot();
    }
    else if(x>=0 && x<=24)
    {
        Cold();
    }
    else 
    {
        printf("Only positive values are accepted.");
    }

    return 0;
}
void Hot()
{
    printf("It's a Hot Weather!");
}
void Cold()
{
    printf("It's a Cold Weather!");
}

