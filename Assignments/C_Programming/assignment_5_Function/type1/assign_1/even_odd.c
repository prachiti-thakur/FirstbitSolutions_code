//function without parameters without returntype
//check even and odd
#include<stdio.h>
//declaration
void even_Odd();

void main(){
	
	//call
	even_Odd();
}
//defination
void even_Odd(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("Even number");
	}
	else
	{
		printf("odd number");
	}
}