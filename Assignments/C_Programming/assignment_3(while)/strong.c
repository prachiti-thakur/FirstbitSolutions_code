//strong number
#include<stdio.h>

//declaration
int strong();


void main(){
	
	
	int res=strong();//call
	
	if(res){
		printf("It is strong number");
	}
	else{
		printf("It is not strong number");
	}
	
	
	
}

int strong(){
	
	int num=145;
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
		return 1;
	}
	else{
		return 0;
	}
	
	printf("after returns");
	
	
}