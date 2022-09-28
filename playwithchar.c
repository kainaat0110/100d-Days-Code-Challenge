#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch1;
    char s[20] , sen[50];

    scanf("%c" , &ch1);
    scanf("%s" , s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n" , ch1);
    printf("%s\n" , s);
    printf("%s\n" , sen);
    return 0;
}
