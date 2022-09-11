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
    struct student s1 , s2 , s3;
    
   
    printf("Enter first student name, roll_no , cgpa : \n");
    scanf("%s" , s1.name);
    scanf("%d" , &s1.roll_no);
    scanf("%f" , &s1.cgpa);
    printf("Enter second student name, roll_no , cgpa : \n");
    scanf("%s" , s2.name);
    scanf("%d" , &s2.roll_no);
    scanf("%f" , &s2.cgpa);
    printf("Enter third student name, roll_no , cgpa : \n");
    scanf("%s" , s3.name);
    scanf("%d" , &s3.roll_no);
    scanf("%f" , &s3.cgpa);


    printf("Details of First student is\n Name : %s\n Roll no : %d\n CGPA : %f\n" , s1.name , s1.roll_no , s1.cgpa);
    printf("Details of Second student is\n Name : %s\n Roll no : %d\n CGPA : %f\n" , s2.name , s2.roll_no , s2.cgpa);
    printf("Details of Third student is\n Name : %s\n Roll no : %d\n CGPA : %f\n" , s3.name , s3.roll_no , s3.cgpa);
    
    
    return 0;
}
