//2. Search the given number in array.
#include<stdio.h>
int search(int*,int);
void main(){
	int arr[10]={1,2,4,3,5,8,6,7,9,10};
	int s=10;
	int i=search(arr,s);
	if(i!=-1)
	printf("Element presents on the index:%d",i);
	else
	printf("Element not found!!");
}
int search(int* arr,int s){
	int num;
	printf("Enter the number wants to search:");
	scanf("%d",&num);
	for(int i=0;i<s;i++){
		if(arr[i]==num){
			return i;
		}
	}
	return -1;
}