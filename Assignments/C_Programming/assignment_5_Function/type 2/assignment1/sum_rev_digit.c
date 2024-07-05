//accept 3 digit num ,sum the digits and reverse

#include<stdio.h>

int sum_digits();
int rev_digit();

void main(){
	
	int sum=sum_digits();
	printf("\nThe sum of the digit is %d ",sum);
	int rev=rev_digit();
	printf("\nThe reverse of the number is %d",rev);
	
	
}

int sum_digits(){
	int num=123;

	int rem,sum=0;
	
	while(num>0){
		
	rem=num%10;
	num=num/10;
	sum=sum+rem;
	}
	
	return sum;
}

int rev_digit(){
	
	int num=121;
	int rem,rev=0;
	
	while(num>0){
		
	rem=num%10;
	num=num/10;
	rev=(rev*10)+rem;
	
	}

	return rev;
}