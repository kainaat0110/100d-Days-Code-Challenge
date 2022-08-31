/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Value(int x);

int main()
{
    int x;
    printf("Enter a Price:");
    scanf("%d" , &x);
    printf("The final price is %d" , Value(x));

    return 0;
}
int Value(int x)
{
    int cal = x + 0.18*x;
    return cal;
}


