//find peak element in array who is greatest  in  neighbor 
#include<stdio.h>
void main(){
	int arr[5]={15,10,20,15,30};
	int size=5;
	
	for(int i=0;i<size;i++){
		if(i==0){
			if(arr[i]>arr[i+1])
				printf("%d\t",arr[i]);
		}else{
			if(i==(size-1)){
				if(arr[i]>arr[i-1]){
					printf("%d\t",arr[i]);
				}
			}
		else{
			if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
				printf("%d\t",arr[i]);
			}
		}
	}
		
		
		
		
	}
}