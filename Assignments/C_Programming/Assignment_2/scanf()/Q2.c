//using scanf()
//greatest no. among 3
#include<stdio.h>
void main(){
	
	int num1,num2,num3;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("\nEnter num2:");
	scanf("%d",&num2);
	printf("\nEnter num3 :");
	scanf("%d",&num3);
	
	
	if(num1>num2){
		if(num1>num3){
			printf("\nnum1 is greatest %d",num1);
		}
		else{
			printf("\nnum2 is greatest %d",num2);
		}
	}
	else{
		if(num2>num3){
				printf("\nnum2 is greatest %d",num2);
		}
		else{
			printf("\nnum3 is greatest %d",num3);
		}
	}
	
	
}