//sum of first and last digit of the number 
#include<stdio.h>
int sum_F_L(int);
void main(){
	int num,s;
	
	printf("Enter the num");
	scanf("%d",&num);
	
	s=sum_F_L(num);//call
	printf("sum is %d",s);
	
}

int sum_F_L(int num){
	
	int O_num=num;
	int last_digit,first_digit,rem,sum=0;
	last_digit=num%10;
	printf("\nlast %d",last_digit);
	
	while(num>0){
		rem=num%10;
		num=num/10;
	}
	first_digit=rem;
	printf("\nfirst %d",first_digit);
	
	sum=first_digit+last_digit;
	
	return sum;
}