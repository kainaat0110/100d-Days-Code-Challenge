/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int x , int y);
int diff(int x , int y);
int mul(int x , int y);
int divi(int x , int y);

int main()
{
    int x , y;
    char op;
    printf("Select an operator :\n");
    scanf("%s" , &op);
    printf("Enter two positive numbers:\n");
    scanf("%d %d" , &x , &y);
    switch(op)
    {
        case '+' : printf("Sum is equal to %d" , sum(x,y));
                  break;
        case '-' : printf("Difference is equal to %d" ,diff(x,y));
                  break;
        case '*' : printf("Multiplication is equal to %d" , mul(x,y));
                  break;
        case '/' :printf("Divison is equal to %d" , divi(x,y));
                  break;
        default : printf("Invalid operator.\n");
    }

    return 0;
}
int sum(int x , int y)
{
    int sum = x + y;
    return sum;
}

int diff(int x , int y)
{
    int diff = x - y;
    return diff;
}

int mul(int x , int y)
{
    int mul = x * y;
    return mul;
}

int divi(int x , int y)
{
    int division = x/y;
    return division;
}