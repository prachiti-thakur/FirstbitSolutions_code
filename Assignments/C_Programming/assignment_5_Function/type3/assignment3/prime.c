//prime number
#include<stdio.h>
void prime(int);
void main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	//call
	prime(num);
}
void prime(int num){

	int i=2;
	while(i<num){
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