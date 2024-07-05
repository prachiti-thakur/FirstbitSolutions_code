
//func without parameter without returntype
//prime number
#include<stdio.h>
//declaration
void prime();

void main(){
	prime();//call
}

//defination
void prime(){
	int num;
	printf("Enter the num :");
	scanf("%d",&num);
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