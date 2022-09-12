/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct employee {
    char name[50];
    int empId ;
    float CTC;
};

int main()
{
    struct employee s1 , s2 , s3;
    printf("Enter Your name , EmpId , Salary: \n");
    scanf("%s" , s1.name);
    scanf("%d" , &s1.empId);
    scanf("%f" , &s1.CTC);
    
    printf("Enter Your name: \n");
    scanf("%s" , s2.name);
    printf("Enter your Employee ID: \n");
    scanf("%d" , &s2.empId);
    printf("Enter your salary: \n");
    scanf("%f" , &s2.CTC);
    
    printf("Enter Your name: \n");
    scanf("%s" , s3.name);
    printf("Enter your Employee ID: \n");
    scanf("%d" , &s3.empId);
    printf("Enter your salary: \n");
    scanf("%f" , &s3.CTC);
    
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = i + 1; j < 3; j++)
        {
            if(s1.CTC < s2.CTC )
            {
                int temp ;
                temp = s1.CTC;
                s1.CTC = s2.CTC;
                s2.CTC = temp;
            }
            if(s2.CTC < s3.CTC)
            {
                int temp ;
                temp = s2.CTC;
                s2.CTC = s3.CTC;
                s3.CTC = temp;
            }
            if(s1.CTC < s3.CTC)
            {
                int temp ;
                temp = s1.CTC;
                s1.CTC = s3.CTC;
                s3.CTC = temp;
            }
        }
    }
    
    
    printf("Your name is %s\n" , s1.name);
    printf("Your Employee ID is %d\n" , s1.empId);
    printf("Your salary is %f\n" , s1.CTC);
    
    printf("Your name is %s\n" , s2.name);
    printf("Your Employee ID is %d\n" , s2.empId);
    printf("Your salary is %f\n" , s2.CTC);
    
    printf("Your name is %s\n" , s3.name);
    printf("Your Employee ID is %d\n" , s3.empId);
    printf("Your salary is %f\n" , s3.CTC);
    
    return 0;
}
