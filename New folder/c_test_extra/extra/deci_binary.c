//decimal to binary
#include<stdio.h>
void main(){
	int num=10;
	int ori=num;
	int rem,rev=0;
	while(num>0){
		rem=num%2;
		num=num/2;
		//rev=(rev*10)+rem;
		printf("%d\t",rem);
	}
	//rev=(rev*10)+num;
	
	printf("Decimal is %d and binary is %d",ori,rev);
}