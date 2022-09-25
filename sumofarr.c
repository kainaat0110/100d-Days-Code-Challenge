#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    int sum[1000];

    scanf("%d" , &num);
    for(int i = 0; i < num ; i++){
        scanf("%d" , &sum[i]);
    }
    int add = 0;
    for(int i = 0; i < num ; i++){
    add = add + sum[i];
    }
    printf("%d" , add);

       
    return 0;
}
