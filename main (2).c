/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct student {
        int roll_no;
        char name[60];
        float cgpa;
    };

int main()
{
    struct student s;
    printf("Enter your name, roll_no , cgpa : \n");
    scanf("%s" , s.name);
    scanf("%d" , &s.roll_no);
    scanf("%f" , &s.cgpa);
    printf("Name is %s\n" , s.name);
    printf("Roll no is %d\n" , s.roll_no);
    printf("CGPA is %f\n" , s.cgpa);
    
    return 0;
}
