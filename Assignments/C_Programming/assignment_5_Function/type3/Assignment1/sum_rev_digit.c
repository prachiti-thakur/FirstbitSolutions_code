//accept 3 digit num ,sum the digits and reverse

#include<stdio.h>
void sum_D(int);
void rev_D(num);


void main(){
	int num=11;
	sum_D(num);
	rev_D(num);

}

//functions definations 

void sum_D(int num){
	int sum=0,rem;
	while(num>0){
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("\nThe sum of the digit is %d ",sum);
}

void rev_D(int num){
	int rev=0,rem;
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=(rev*10)+rem;
	}
		printf("\nThe reverse of the number is %d",rev);
	
}