/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct node {
    int data;
    struct node *next;
    struct node *head;
};
struct node *temp , *newnode;
head = 0;

int insert();
int del();
int display();

int main() {
    int ch, pos;
    while(1){
        printf("-----------Operations of Linked List-----------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your Choice:\n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1:insert();
                break;
            case 2: del();
                break;
            case 3: display();
            case 4: exit(0);
            default: printf("Invalid Choice!");
        }
    }
 
    return 0;
}
int insert(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d" , &newnode -> data);
    if(head == 0){
        head = temp = newnode;
    } else {
        temp -> next = newnode;
        temp = newnode;
        temp -> next = 0;
    }
    
}
int del(int pos){
    
}
int display(){
    temp = head;
    while(temp != 0)
    {
        printf("%d" , temp -> data);
        temp = temp -> next;
     }
}