//using scanf()
//greatest no. among 3
#include<stdio.h>
int greatest();
void main(){
	
	int res=greatest();
	printf("Greatest number is %d",res);
}

int greatest(){
	int num1,num2,num3;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("\nEnter num2:");
	scanf("%d",&num2);
	printf("\nEnter num3 :");
	scanf("%d",&num3);
	
	
	if(num1>num2){
		if(num1>num3){
			return num1;
		}
		else{
			return num3;
		}
	}
	else{
		if(num2>num3){
				return num2;
		}
		else{
			return num3;
		}
	}
	
}