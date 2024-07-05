//reverse
#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50};
	
	int size=5;
	int j=size-1;
	
	printf("array before  reverse:");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	
	//reverse logic
	for(int i=0;i<size/2;i++){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	
	//printing the reverse array
	printf("\n reverse array:");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}