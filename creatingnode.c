#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *head;
    struct node *link;
};

int main() {
    
    struct node *head = malloc(sizeof(struct node));
    head -> data = 90;
    head -> link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current -> data = 85;
    current -> link =NULL;
    head -> link = current;
    
    current = malloc(sizeof(struct node));
    current -> data = 80;
    current -> link = NULL;
    head -> link -> link = current;
    
    printf("%d\n" , head -> data);
    printf("%d\n" , head -> link);
    printf("%d\n" , current -> data);
    printf("%d\n" , current -> link);
    printf("%d\n" , head -> link -> data);
    printf("%d\n" , head -> link -> link);
    
    return 0;
}