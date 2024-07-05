//1. Find minimum and maximum number in array.
#include<stdio.h>
int max_arr(int*,int);
int min_arr(int*,int);
void main(){
	int arr[10]={1,4,2,4,8,4,9,8,10,11};
	int size=10;
	int m=max_arr(arr,size);
	int n=min_arr(arr,size);
	printf("Max:%d\n",m);
	printf("Min:%d\n",n);
}

int max_arr(int* arr,int size){
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
	
}
int min_arr(int* arr,int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	return min;
}