// Q5Print alternate elements in array. 
#include<stdio.h>
void alter(int*,int);

void main(){
	int arr[7]={1,2,4,3,5,6,7};
	alter(arr,7);
}

void alter(int* arr,int size){
	for(int i=0;i<size;i=i+2){
		printf("%d\t",arr[i]);
			}
}