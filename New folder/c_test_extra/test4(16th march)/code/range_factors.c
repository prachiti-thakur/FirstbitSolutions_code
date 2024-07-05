//range of factors
#include<stdio.h>
void main(){
	int s,e;
	
	printf("Enter the start:");
	scanf("%d",&s);
	
	printf("Enter the end:");
	scanf("%d",&e);
	
	//outer for loop for each ele
	for(int i=s;i<=e;i++){
		//
		printf("factors of %d:\t",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0){
				printf("%d\t",j);
			}
		}
		printf("\n");
		
		
	}//end of outer loop
	
	
}