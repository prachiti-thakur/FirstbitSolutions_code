#include<stdio.h>
#include<stdlib.h>

int* create_arry(int);
void even_odd(int*, int);

void main(){
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	
	//create array
	int* arr=create_arry(n);
	
	
	//
	even_odd(arr,n);
	
	
}


//definations
int* create_arry(int n){
	int* M_array=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("Enter the value %d :",i);
			scanf("%d",&M_array[i]);
	}
	
	return M_array;
}

void even_odd(int* arr, int n){
			
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				printf("\n\nindex:%d even:%d\n\n",i,arr[i]);
			}
			else{
				printf("\n\nindex :%d odd:%d\n\n",i,arr[i]);
			}
		}
	
	
}

