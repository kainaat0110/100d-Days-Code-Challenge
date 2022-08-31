/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter 3 prices:");
    scanf(" %f %f %f" , &price[0], &price[1] , &price[2]);
    printf("The final price of first product is (including gst) : %f\n" , price[0] + (0.18*price[0]));
    printf("The final price of the second product is (including gst) : %f\n" , price[1] + (0.18*price[1]));
    printf("The final price of third price is(including gst) :%f\n" , price[2] + (0.18*price[2]));

    return 0;
}
