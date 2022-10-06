/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head = 0;
struct node *temp , *newnode;


int insertattheend();
int insertatthebeginning();
int del();
int display();

int main() {
    int ch, pos;
    while(1){
        printf("-----------Operations of Linked List-----------\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a Position\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your Choice:\n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1:insert();
                break;
            case 2: del();
                break;
            case 3: display();
                break;
            case 4: exit(0);
            default: printf("Invalid Choice!");
        }
    }
 
    return 0;
}
int insertatthebeginning(){
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d" , &newnode -> data);
    newnode -> next = head;
    head = newnode;
    
int insertattheend(){
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d" , &newnode -> data);
    newnode -> next = 0;
    if(head == 0){
        head = temp = newnode;
    } else {
        temp -> next = newnode;
        temp = newnode;
    }
    
}
int del(){
    struct node *a , *prevnode;
    a = head;
    while(a-> next != 0){
        prevnode = a;
        a = a -> next;
    }
    prevnode -> next = 0;
    free(a);
    
}
int display(){
    struct node *k;
    k = head;
   while(k != NULL)
    {
        printf("%d\t" , k -> data);
        k = k -> next;
     }
     printf("\n");
}
Footer
© 2022 GitHub, Inc.
