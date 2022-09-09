/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct student {
        int roll_no;
        char name[50];
        float cgpa;
    };

int main()
{
    struct student s;
    s.roll_no = 1978;
    strcpy(s.name , "Kainaat");
    s.cgpa = 8.3;
    printf("Name is %s\n" , s.name);
    printf("Roll no is %d\n" , s.roll_no);
    printf("CGPA is %f\n" , s.cgpa);
    
    return 0;
}
