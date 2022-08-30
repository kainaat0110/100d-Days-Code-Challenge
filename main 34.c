/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int percent(int x , int y, int z);
int main()
{
    int x,y,z;
    printf("Enter your marks of Math , Sci , Eng:");
    scanf("%d %d %d" , &x , &y , &z);
    printf("Your Percentage is %d", percent(x,y,z));

    return 0;
}
int percent(int x , int y , int z)
{
    int percent = (x+y+z)/3;
    return percent;
}
