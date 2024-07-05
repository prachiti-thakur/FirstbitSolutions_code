//prime number
#include<stdio.h>
void main(){
	int num=10;
	int i=2;
	for(i=2;i<num;)
	{
		if(num%i!=0){
			i++;
		}
		else{
			break;
		}
	}
	
	if(i==num){
		printf("Number is prime");
	}
	else{
		printf("number is not prime");
	}
}