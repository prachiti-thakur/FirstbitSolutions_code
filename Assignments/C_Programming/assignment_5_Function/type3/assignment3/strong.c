//strong number
#include<stdio.h>

//declaration
void strong(int);


void main(){
	
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	strong(num);
}

//defination

void strong(int num){
	
	int num_O=num,rem,sum_fact=0;
	while(num>0){
		rem=num%10;
		num=num/10;//inc /dec
			//for factorial
			int fact=1;//for each iteration it must be 1 initialy
				while(rem>0){
					fact=fact*rem;
					rem--;
					
				}
		sum_fact=sum_fact+fact;
	}
	
	//check the sum of fact of each digit 
	if(num_O==sum_fact){
			printf("It is strong number");
	}
	else{
			printf("It is not strong number");
	}
	
	
	
	
}