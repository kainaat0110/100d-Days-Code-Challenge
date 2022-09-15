/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int max_of_four(int a,int b,int c,int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    int temp1, temp2;
    if(b<a){
        temp1 = a;
    } else {
        temp1 = b;
    }
    if(d<c)
    {
        temp2 = c;
    } else {
        temp2 = d;
    }
    if(temp2 < temp1)
    {
        return temp1;
    } else {
        return temp2;
    }
}
