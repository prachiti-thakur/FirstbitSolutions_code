
//check even and odd
#include<stdio.h>
//declaration
int even_odd(int);

void main(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	//call
	int res=even_odd(num);
	if(res==1){
		printf("even number");
	}
	else{
		printf("Odd number");
	}
}
//defination

int even_odd(int num){
	
	if(num%2==0){
		return 1;
	}
	else
	{
		return 0;
	}
}
