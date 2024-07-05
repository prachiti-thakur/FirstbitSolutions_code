//sum of digits by loop
#include<stdio.h>
void main(){
	int num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	int rem;
	while(num>0){
		
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	
	
	
	
	printf("\nThe sum of the digit is %d ",sum);
}