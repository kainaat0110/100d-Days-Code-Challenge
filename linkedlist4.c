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
int delatthebeginning();
int deleteattheend();
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
            case 4: delatthebeginning();
                break;
            case 5: deleteattheend();
            case 6: display();
                break;
            case 7: exit(0);
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
