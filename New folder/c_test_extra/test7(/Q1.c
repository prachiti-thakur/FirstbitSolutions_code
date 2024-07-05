//test7
#include<stdio.h>
void store(int*,int);
void exchange(int*,int,int,int);
void display(int*,int);

void main(){
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	
	store(arr,n);
	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter Y:");
	scanf("%d",&y);
	exchange(arr,n,x,y);
	
	display(arr,n);
}

void store(int*arr,int n){
	
	for(int i=0;i<n;i++)
	{
		printf("index i:",i);
		scanf("%d",&arr[i]);
	}
}

void exchange(int* arr,int n,int x,int y){
	
			int temp=arr[x-1];
			arr[x-1]=arr[y-1];
			arr[y-1]=temp;
}

void display(int* arr,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}