
//func without parameter without returntype
//prime number
#include<stdio.h>
//declaration
int prime(int);

void main(){
	int num,p;
	printf("Enter the num :");
	scanf("%d",&num);
	p=prime(num);//call
	if(p==1)
	printf("prime number");
	else
	printf("not prime number");
}

//defination
int prime(int num){
	
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
		return 1;
	}
	else{
		return 0;
	}
}