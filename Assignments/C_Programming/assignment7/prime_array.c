//accept elememt and print only prime numbers
#include<stdio.h>
void main(){
	int arr[5];
	int size=5;
	printf("Enter the elements in the array:\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("arry elements :");
	for(int i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
	//check for each prime or not
	int j;
	for(int i=0;i<size;i++){
		//arr[i] is one element of arry
		//loop for 2 to n-1 to check divisible or not
		//printf("inside i for loop\n");
		for(j=2;j<arr[i];j++){
			//printf("inside j for  loop\n");
			if(arr[i]%j!=0){
				//2 3 4 5
			}
			else{
				break;//it is divisible
			}
				
		}
		
		//check prime or not
		printf("arr[i]:%d  j: %d\n\n",arr[i],j );
		if(arr[i]==j) //5==5
			printf("\n index:%d , prime:%d\n",i,arr[i]);
	}
}