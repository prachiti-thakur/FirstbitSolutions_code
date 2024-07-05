//greatest no. among 3
#include<stdio.h>
void main(){
	
	int num1=10,num2=30,num3=40;
	if(num1>num2){
		if(num1>num3){
			printf("num1 is greatest %d",num1);
		}
		else{
			printf("num2 is greatest %d",num2);
		}
	}
	else{
		if(num2>num3){
				printf("num2 is greatest %d",num2);
		}
		else{
			printf("num3 is greatest %d",num3);
		}
	}
	
	
}