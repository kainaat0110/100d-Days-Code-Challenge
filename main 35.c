/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fib(int x);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d" , &x);
    printf("Fibonacci of %d is %d",x , fib(x));

    return 0;
}
int fib(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    int fibnm1 = fib(x-1);
    int fibo = fibnm1 + fib(x-2);
    return fibo;

}
