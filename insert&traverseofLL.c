#include <stdio.h>
#include <stdlib.h>
int insert(struct node *head , int data);
void display(struct node *head);

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
    current -> link = NULL;
    head -> link = current;
    
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = 80;
    temp -> link = NULL;
    head -> link -> link = temp;
    
    current = malloc(sizeof(struct node));
    current -> data = 75;
    current -> link = NULL;
    temp -> link = current;
    
    insert(head , 70);
    display(head);
    return 0;
}
int insert(struct node *head , int data){
    struct node *ptr;
    ptr = head;
    struct node *temp1 = malloc(sizeof(struct node));
    temp1 -> data = data;
    temp1 -> link = NULL;
    while(ptr -> link == NULL){
       ptr -> link = temp1;
    }
}
void display(struct node *head){
    struct node *ptr;
    ptr = head;
    while(ptr -> link != NULL){
        printf("%d\t" , ptr -> data);
        ptr = ptr -> link;
    }
}