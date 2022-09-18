#include <stdio.h>
struct node {
    int data;
    struct node *next;
};
int insert(int pos);
int del(int pos);
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
            case 1: printf("Enter the postion you want to insert: \n");
                scanf("%d" &pos);
                insert(pos);
                break;
            case 2: printf("Enter the position you want to delete element from: \n");
                scanf("%d" , &pos);
                break;
            case 3: display();
            case 4: exit(0);
            default: printf("Invalid Choice!");
        }
    }
 
    return 0;
}
int insert(int pos){
    
}
int del(int pos){
    
}
int display(){
    
}