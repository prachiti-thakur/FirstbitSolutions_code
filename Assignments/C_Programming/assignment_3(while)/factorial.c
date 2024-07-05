//factorial number
#include<stdio.h>
void main(){
	int num=5,fact=1;
	int i=num;
	
	while(i>0){
		fact=fact*i;
		printf("\n fact is %d and i is %d",fact,i);
		i--;
	}
	
	printf("\n factorial of %d is %d",num,fact);
	
}