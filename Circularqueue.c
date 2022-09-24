#include <stdio.h>
#include <stdlib.h>

#define size 5
int circularqueue[size];
int front = -1; int rear = -1;
int enqueue(int data);
int dequeue();
int display();

int main() {
    int ch , data;
    while(1){
        printf("----------Operations of Circular Queue-----------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Your Choice : \n");
        scanf("%d" , &ch);
        
        switch(ch){
            case 1:printf("Enter a Number : \n");
                    scanf("%d" , &data);
                    enqueue(data);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}
int enqueue(int data){
    if((rear+1)% size == front){
        printf("Queue is full!\n");
    }
    if(rear == -1 && front == -1){
        rear = front = 0;
        circularqueue[rear] = data;
    } else{
        rear = (rear+1)%size;
        circularqueue[rear] = data;
    }
}
int dequeue(){
    if(rear == -1 && front == -1){
        printf("Queue is Empty!\n");
    }
    if(rear == front){
        front = -1;
        rear = -1;
    }
    else{
        front = (front+1)%size;
    }
}
int display(){
    for(int i = front; i <= rear ; i++){
        printf("%d\t" , circularqueue[i]);
    } printf("\n");
}