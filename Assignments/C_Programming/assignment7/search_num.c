//search number
#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50};
	int search=40;
	int size=5;
	for(int i=0;i<size;i++){
		if(arr[i]==search){
			printf("num %d is present at index %d ",search,i);
			break;
		}
	}
	
}