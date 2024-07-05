//factorial number
#include<stdio.h>
void fac(int*);
//declaration
void main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	fac(&num);
}

//defination
void fac(int* num){
	int fact=1;
	int i=(*num);
	
	while(i>0){
		fact=fact*i;
		//printf("\n fact is %d and i is %d",fact,i);
		i--;
	}
	
	printf("\n factorial of %d is %d",(*num),fact);
	
}