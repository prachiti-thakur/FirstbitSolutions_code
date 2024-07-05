//take 2 array and sum in 3rd array
#include<stdio.h>
void main(){
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	
	int size=5;
	for(int i=0;i<size;i++){
		crr[i]=arr[i]+brr[i];
	}
	//print crr
	for(int i=0 ;i<size;i++){
		printf("%d\n",crr[i]);
	}
}