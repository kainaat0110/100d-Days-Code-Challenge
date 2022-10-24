#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *head =0;
struct node *newnode , *temp;

int Insert(int num);
int Delete();
int Display();

int main() {
    
    int ch, num;
    
    while(1){
        printf("-------Operations of Single Linked List-------\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: \n");
        scanf("%d" , &ch);
        
        switch(ch){
            
            case 1: printf("Enter the number you want to Insert: ");
                    scanf("%d" , &num);
                    Insert(num);
                    break;
            case 2: Delete();
                    break;
            case 3: Display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid Choice!");
                    break;
            
        }
    }
   
    return 0;
}

int Insert(int num){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = num;
    if(head == 0){
        head = temp = newnode;
    } else {
        temp -> link = newnode;
        temp = newnode;
    }
}
int Delete(){
    struct node *prevnode , *currentnode;
    currentnode = head;
    while(currentnode -> link != 0){
        prevnode = currentnode;
        currentnode = currentnode -> link;
    }if(currentnode == head){
        head = 0;
        free(currentnode);
    } else {
    prevnode -> link = 0;
    free(currentnode);
    }
}
int Display(){
    struct node *traverse;
    traverse = head;
    printf("Your List is: ");
    while(traverse != 0){
        printf("%d\n" , traverse -> data);
        traverse = traverse -> link;
    }
}