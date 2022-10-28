/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prevlink;
    struct node *nextlink;
    };
struct node *head =0;
struct node *newnode , *tail;
    
int Insertatbeg(int num);
int Display();
    
int main() {
    int ch, num;
    while(1){
        printf("-------Operations of Double Linked List-------\n");
        printf("1. Insert at the beginning\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1: printf("Enter the number you want to Insert: ");
                    scanf("%d" , &num);
                    Insertatbeg(num);
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
int Insertatbeg(int num){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = num;
    newnode -> nextlink = 0;
    newnode -> prevlink = 0;
    if(head == 0){
        head = newnode;
    } else {
        head  -> prevlink = newnode;
        newnode  -> nextlink = head;
        head = newnode;
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