//check even and odd
#include<stdio.h>
void even_odd(int);//declaration

void main(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	even_odd(num);//call
	

}

//func defination
void even_odd(int num){
	if(num%2==0){
		printf("Even number");
	}
	else
	{
		printf("odd number");
	}
}