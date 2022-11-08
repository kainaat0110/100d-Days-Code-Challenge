// Implementation Of Binary Search Tree

#include<stdio.h>
int n;

void BST(int array[n],int n1,int f,int l){
	
	
	
	
	
	
}
int main(){
	int n1,i,j;
	printf("Enter The No Of Elements:-");
	scanf("%d",&n);
	
	int array[n];
	printf("Enter The Elements(Enter The Elements In Sorted Manner):-");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	
	printf("Enter The Element You want To Find the position:-");
	scanf("%d",&n1);
	int f=0;
	int l= n-1;
	int e=1;
	
	while(e!=0){
	
	j=(f+l)/2;
	if(array[j]==n1){
		printf("Your Element is At Position %d",j+1);e=0;
	}
	else{
			if(array[j]>n1){
				l=j;
			}
			else{
				f=j;
				if(l==f+1){
					printf("Your Element is At Position %d",l+1);e=0;
				}	
			}
		}
	}
}
