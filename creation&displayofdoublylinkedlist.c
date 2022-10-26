#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prevlink;
    struct node *nextlink;
    };
struct node *head =0;
struct node *newnode , *temp;
    
int Insert(int num);
int Display();
    
int main() {
    int ch, num;
    while(1){
        printf("-------Operations of Double Linked List-------\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1: printf("Enter the number you want to Insert: ");
                    scanf("%d" , &num);
                    Insert(num);
                    break;
            case 2: Display();
                    break;
            case 3: exit(0);
                    break;
            default: printf("Invalid Choice!\n");
    return 0;
        }
    }
}
int Insert(int num){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = num;
    newnode -> nextlink = 0;
    newnode -> prevlink = 0;
    if(head == 0){
        head = temp = newnode;
    } else {
        temp -> nextlink = newnode;
        newnode -> prevlink = temp;
        temp = newnode;
    }
}
int Display(){
    if(head == 0){
        printf("List is Empty!");
    } else {
        struct node *current;
        current = head;
        while(current != 0){
            printf("%d\t" , current -> data);
            current = current -> nextlink;
        }
    } printf("\n");
}