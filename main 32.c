/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char a;
    printf("Enter 'I' for indian and 'F' for French:");
    scanf("%s" , &a);
    if(a == 'I')
    {
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}
void namaste()
{
    printf("Namaste!");
}
void bonjour()
{
    printf("Bonjour");
}
