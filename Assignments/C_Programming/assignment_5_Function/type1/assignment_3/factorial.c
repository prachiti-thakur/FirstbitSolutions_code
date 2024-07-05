//factorial number
#include<stdio.h>

//declaration

void factorial();


void main(){
	
	//call
	factorial();
	
}

//defination
void factorial(){
	int num,fact=1;
	
	printf("Enter  the num:");
	scanf("%d",&num);
	
	int i=num;
	
	while(i>0){
		fact=fact*i;
		printf("\n fact is %d and i is %d",fact,i);
		i--;
	}
	
	printf("\n factorial of %d is %d",num,fact);
}