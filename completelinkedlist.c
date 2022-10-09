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
int insertatpos();
int delatthebeginning();
int deleteattheend();
int deleteatpos();
int display();

int main() {
    int ch, pos;
    while(1){
        printf("-----------Operations of Linked List-----------\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a Position\n");
        printf("4. Delete at the beginning\n");
        printf("5. Delete at the end\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your Choice:\n");
        scanf("%d" , &ch);

        switch(ch){
            case 1:insertatthebeginning();
                break;
            case 2: insertattheend();
            case 3: insertatpos();
            case 4: delatthebeginning();
                break;
            case 5: deleteattheend();
            case 6: deleteatpos();
            case 7: display();
                break;
            case 8: exit(0);
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
int insertatpos(){
    int pos;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Position you want to Insert: \n");
    scanf("%d" , &pos);
    if(count<pos){
        printf("Invalid Position!");
    } else {
        temp = head;
        while(i<pos){
            temp = temp -> next;
            i++;
        }
        printf("Enter the data you want to enter:\n");
        scanf("%d" , &newnode->data);
        newnode->next = temp->next;
    }
    
}
int delatthebeginning(){
    struct node *a , *prevnode;
    a = head;
    head = head -> next 
    free(a);

}
int delattheend(){
    struct node *a , *prevnode;
    a = head;
    while(a-> next != 0){
        prevnode = a;
        a = a -> next;
    }
    prevnode -> next = 0;
    free(a);

}
int deleteatpos(){
    struct node *a , *nextnode;
    int pos , i=1;
    temp = head;
    printf("Enter the Position you want to Delete: \n");
    scanf("%d" , &pos);
    while(i<pos-1){
        temp = temp -> next;
        i++;
    }
    nextnode = temp  -> next;
    temp -> next = newnode -> next;
    free(nextnode);
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
