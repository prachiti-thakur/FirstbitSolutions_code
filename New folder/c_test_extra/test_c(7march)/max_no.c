//Q1
#include<stdio.h>
void main(){
	int num1,num2,num3;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num1:");
	scanf("%d",&num2);
	
	printf("Enter num1:");
	scanf("%d",&num3);
	
	if(num1>num2){
		if(num1>num3){
			printf("%d is greater",num1);
		}
		else{
			printf("%d is greater",num2);
		}
	}
	else{
		if(num2>num3){
			printf("%d is greater",num2);
		}
		else{
			printf("%d is greater",num3);
		}
	}
	
}