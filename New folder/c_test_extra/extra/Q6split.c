// 123456 split into 2  2  12 34 56 from this set of 2 find out small and print 1 num who contains all smallnumbers
#include<stdio.h>
void main(){
	
	//1st reverse it 
	int num=123456,rem;
	int no_1,no_2;
	int n=1;
	int sum=0;
	while(num>0){
		rem=num%100;//getting 2last digit
		num=num/100;//reducing number by 2 digits
		
		
		
		//split the rem and check for smaller
		no_1=rem%10;
		rem=rem/10;
		no_2=rem%10;
		
			if(no_1<no_2){
				sum=(no_1*n)+sum;
				n=n*10;
				printf("\nsum %d",sum);
				}
			else{
				sum=(no_2*n)+sum;
				n=n*10;
				printf("\nsum %d",sum);
			}
		
	}//end while
	
	printf("\nThe combination of small no is :%d",sum);
	
}