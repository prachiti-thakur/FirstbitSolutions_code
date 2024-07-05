//strong number
#include<stdio.h>
void main(){
	int num=145;
	int num_O=num,rem,sum_fact=0,fact=0;
	while(num>0){
		rem=num%10;
		num=num/10;//inc /dec
		
		while(rem>0){
			fact=fact*rem;
			rem--;
			
		}
		sum_fact=sum_fact+fact;
	}
	
	//check the sum of fact of each digit 
	if(num_O==sum_fact){
		printf("It is strong number %d",num_O);
	}
	else{
		printf("It is not strong number %d",num_O);
	}
}