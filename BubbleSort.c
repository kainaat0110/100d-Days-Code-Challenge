// Bubble Sort
#include<stdio.h>
#define size 5
int array[size]={0};
void BubbleSort(){
	int tmp=0;
	int i=0;
	for(i=0;i<size-1;i++){
		int j=i+1;
		if(array[i]>array[j])
		{
			tmp=array[i];
			array[i]=array[j];
			array[j]=tmp;
		}

	}
}
void Display(){
	int i=0;
	printf("Your List is :-\n");
	for(i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
	
}
int main(){
	int i=0;
	printf("Enter The Data:-\n");
	for(i=0;i!=size;i++){
		scanf("%d\n",&array[i]);
	}
	BubbleSort();
	Display();
}
