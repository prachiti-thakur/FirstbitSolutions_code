//alternate
#include<stdio.h>
#include<stdlib.h>
int* create_arry(int);
void alternate(int*,int);

void main(){
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int* arr=create_arry(n);
	
	//alternate
	alternate(arr,n);
	
}

int* create_arry(int n){
	
	int* M_arry=(int*)malloc(n*sizeof(int));
	
		for(int i=0;i<n;i++){
			printf("Enter the value %d :",i);
			scanf("%d",&M_arry[i]);
		}
		return M_arry;
}

void alternate(int* arr,int n){
	
	for(int i=0;i<n;i=i+2){
		printf("\n\nIndex:%d value :%d\n\n",i,arr[i]);
		
	}
}