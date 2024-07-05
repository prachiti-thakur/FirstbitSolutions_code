//reverse by loop
#include<stdio.h>
void main(){
	int num,rev=0,rem;
		printf("Enter the number:");
		scanf("%d",&num);
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	
	printf("\nThe reverse of the number is %d",rev);
	
}