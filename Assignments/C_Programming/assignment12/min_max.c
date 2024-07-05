#include<stdio.h>
#include<stdlib.h>
int max_arry(int*,int );
int min_arry(int*,int);
int* create_array(int);
void main(){
	//create array
	int n=5;
	//int arr[5]={10,20,30,40,50};
	/*
	int* arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("enter index %d :",i);
		scanf("%d",&arr[i]);
	}*/
	
	int* arr=create_array(n);
	
	int max=max_arry(arr,n);//call
	printf("max : %d\n",max);
	
	int min=min_arry(arr,n);
	printf("\nmin :%d",min);
}

int max_arry(int* arr,int n){
	int max=arr[0];
	
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	return max;
}

int min_arry(int* arr,int n){
	int min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	return min;
}

int* create_array(int n){
	
	int* M_arry=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("enter index %d :",i);
		scanf("%d",&M_arry[i]);
	}
	return M_arry;
}
