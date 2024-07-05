//sumof all  element
#include<stdio.h>
#include<stdlib.h>
int sum_arry(int*,int);
int* create_array(int);


void main(){
	int n;
	printf("Enter the size of arry:");
	scanf("%d",&n);
	
	//create arry
	int* arr=create_array(n);
	
	//sum 
	int sum=sum_arry(arr,n);
	printf("sum is %d",sum);
	
	
}


//definations
int* create_array(int n){
	
		int* M_arry=(int*)malloc(n*sizeof(int));
		
		for(int i=0;i<n;i++){
			printf("Enter the value %d :",i);
			scanf("%d",&M_arry[i]);
		}
	
	return M_arry;
}


int sum_arry(int* arr,int n){
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	
	return sum;
}
