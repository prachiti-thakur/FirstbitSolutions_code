//sorting
#include<stdio.h>
void main(){
	int arr[5]={5,3,4,2,1};
	int size=5,j,temp;
	
	
	for(int i=0;i<size-1;i++){
		
		//holding one elemt and checking with 
		for(j=i+1;j<size;j++){
			
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	
	//
	printf("sorted array:");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}