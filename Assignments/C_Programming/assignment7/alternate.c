//print alternate numbers
#include<stdio.h>

void main(){
	int arr[7]={1,2,3,4,5,6,7};
	for(int i=0;i<7;i=i+2){
		printf("%d \t",arr[i]);
	}
}