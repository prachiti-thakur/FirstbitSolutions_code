//factorial number
#include<stdio.h>
int fact();//declaration

void main(){
	int fct=fact();//call
	printf("The factorial is %d",fct);
	
}
//defination 
int fact(){
	int num=5,fact=1;
	int i=num;
	
	while(i>0){
		fact=fact*i;
		//printf("\n fact is %d and i is %d",fact,i);
		i--;
	}
	
	return fact;
}