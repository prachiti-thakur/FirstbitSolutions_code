#include<stdio.h>
#include<stdlib.h>
int search_num(int*,int);
int* create_arry(int);

void main(){
	
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	//create arry
	int* arr=create_arry(n);
	
	n=search_num(arr,n);
	
	if(n!=0){
			printf("number  is at index:%d",n);
	}
	else{
			printf("Not found");
	}
}

int* create_arry(int n){
	
	int* M_arry=(int*)malloc(n* sizeof(int));
	
	//
	for(int i=0;i<n;i++){
		printf("Enter value %d:",i);
		scanf("%d",&M_arry[i]);
	}
	
	return M_arry;
}

int search_num(int* arr,int n){
	int num;
	printf("Enter the value to search:");
	scanf("%d",&num);
	
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			return i;
		}
	}
	
	return 0;
}