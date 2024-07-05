//3. Find sum of all numbers. 
#include<stdio.h>
int sum_arr(int*,int);
void main(){
	int arr[5]={1,2,3,4,5};
	int size=5;
	int s=sum_arr(arr,size);
	printf("Sum is %d\n",s);
}

int sum_arr(int* arr,int size){
		int sum=0;
		for(int i=0;i<size;i++){
			sum=sum+arr[i];
		}	
		
	return sum;
}
