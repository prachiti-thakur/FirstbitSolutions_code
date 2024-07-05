//min max in array
#include<stdio.h>
void main(){
	int arr[6]={10,20,50,1,4,7};
	int size=6;
	//max number
	//store max and compare with other elements in the array
	int max=arr[0];
	
	for(int i=0;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	
	printf("max number is %d",max);
	///////////////////////////////////////
	//min number
	//store  min and compare with other elements in the array
	int min=arr[0];
	
	for(int j=0;j<size;j++){
		if(arr[j]<min){
			min=arr[j];
		}
	}
	
	printf("\nmin is %d",min);
	
} 
