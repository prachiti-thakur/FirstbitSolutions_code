//factorial number
#include<stdio.h>
void main(){
	int num=5,fact=1;
	int i=num;
	for(i=num;i>0;i--)
	{
		fact=fact*i;
		//printf("\n fact is %d and i is %d",fact,i);
		
	}
	
	printf("\n factorial of %d is %d",num,fact);
	
}