
//using scanf()
//greatest no. among 3
#include<stdio.h>

//declaration

int greatest(int,int,int);
void main(){
	int num1,num2,num3;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("\nEnter num2:");
	scanf("%d",&num2);
	printf("\nEnter num3 :");
	scanf("%d",&num3);
	
//call 
	int g=greatest(num1,num2,num3);
	printf("Greatest no is %d",g);

}

//defination
int greatest(int num1,int num2,int num3){
	
	
	
	if(num1>num2){
		if(num1>num3){
			return num1;
		}
		else{
			return num2;
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