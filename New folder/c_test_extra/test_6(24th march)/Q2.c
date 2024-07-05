#include<stdio.h>
void main(){
	int arr[5]={1,2,4,7,6};
	int max=arr[0];
	int secmax=arr[1];
	for(int i=0;i<5;i++){
		
		if(arr[i]>max){
		secmax=max;
		max=arr[i];
	}
	
	if(max!=arr[i] && arr[i]>secmax){
		secmax=arr[i];
		}
	}

	printf("max:%d",max);
	printf("second_max %d",secmax);
}