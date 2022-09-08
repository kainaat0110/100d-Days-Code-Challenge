/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
char print(char arr[]);

int main()
{
    char firstname[] = "Kainaat";
    char lastname[] = "Zaidi";
    print(firstname);
    print(lastname);
    return 0;
}
 char print(char arr[])
 {
    for(int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c" , arr[i]);
    }
    printf("\t");
 }
