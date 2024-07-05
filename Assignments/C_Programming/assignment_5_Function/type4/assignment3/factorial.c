//factorial number
#include<stdio.h>

//declaration

int factorial(int);


void main(){
	int num,f;
	printf("Enter  the num:");
	scanf("%d",&num);
	//call
	f=factorial(num);
	printf("factorial of %d is %d ",num,f);
	
}

//defination
int factorial(int num){
	int fact=1;
	int i=num;
	
	while(i>0){
		fact=fact*i;
		//printf("\n fact is %d and i is %d",fact,i);
		i--;
	}
	
	return fact;
}