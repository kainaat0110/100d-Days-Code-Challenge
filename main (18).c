/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    if(a < 9 || b < 9){
  	for(int i = a ; i <= b; i++){
          switch(i){
                case 1: printf("one\n");
                break;
                case 2: printf("two\n");
                break;
                case 3: printf("three\n");
                break;
                case 4: printf("four\n");
                break;
                case 5: printf("five\n");
                break;
                case 6: printf("six\n");
                break;
                case 7: printf("seven\n");
                break;
                case 8: printf("eight\n");
                break;
                case 9: printf("nine\n");
                break;
                    
            }
               
    }
    } if(9 < b){
        for(int i = 10 ; i <= b; i++){
            if(i % 2 == 0){
                printf("even\n");
            }else {
                printf("odd\n");
            }
        }
    }
         
         
    
    return 0;
}

