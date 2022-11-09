// Stack
#include<stdio.h>
#define size 5
int a[size];
int front =-1;

void Push(){
	
	if(front==-1){
		front=0;
		
		printf("Enter the Number:- ");
		scanf("%d",&a[front]);
		front=front+1;	
	}
	else if(front==size){
		printf("Stack Overflow!!\n");
	}
	else
	{
		printf("Enter the Number:- ");
		scanf("%d",&a[front]);
		front=front+1;	
	}
}
void Pop(){
	if(front==-1 || front==0){
		printf("Stack is Empty/n");
		front=-1;
		
	}
//	else if(front==0)
//	{
//	
//		printf("You Just Poped the ELement %d from the Stack\n",a[front]);
//		front=-1;
//	}
	else{
		front=front-1;
		printf("You Just Poped the ELement %d from the Stack\n",a[front]);
		
	}
	
	
	
	
}
void Display(){
	int i;
	printf("The Stack Is :-");
	for(i=0;i<front;i++){
		printf("%d\n",a[i]);
	}
	
}
void Search(){
	printf("Enter The Element You Want To Search:-");
	int n,i;
	scanf("%d",&n);
	
	printf("The Stack Is :-\n");
	for(i=0;i<front;i++){
		printf("%d",a[i]);
		if(a[i]==n)
		printf("<--");
		printf("\n");
		}
	}
void ReverseS(){
	if(front==-1){
		printf("Stack is Empty\n");
	}
	else if(front==0){
	
		printf("The reversed Stack is \n%d",a[0]);}
	else{
		int i,rev=0,z=0;
		int b[front];
		while(rev==front-1){
			a[front-1-z]=b[rev];
			rev++;
			z++;
		}
		printf("The Reversed Stack Is\n");
		for(i=0;i<front;i++)
			printf("%d\n",b[i]);
	}
	
	
	
	
}
	
	

int main(){
	int e=1,r;
	while(e!=0){
		printf("***************Stack********************\n");
	printf("1) Push\n2) Pop\n3) Display\n4) Search\n5)Reverse Stack\n 6)Exit\nEnter The Choice:-");
	scanf("%d",&r);
		switch(r)
		{
			case 1: Push();
				break;
				
			case 2: Pop();
				break;
			case 3: Display();
				break;
			case 4: Search();
				break;
			case 6: e=0;
				break;
			case 5 : ReverseS();
				break;
	    	default:printf("Wrong Choice\n");
	}
	}
	
	
}
