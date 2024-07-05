//sum of digits by loops
#include<stdio.h>
void main(){
	int num=145,sum=0,rem;//why 0 bcz sum will otherwise gb so may gets unexpected results 
	/*
	int r1,r2,r3,q1,q2,q3;
	
	r1=num%10;//5
	q1=num/10;//14
	
	r2=q1%10;//4
	q2=q1/10;//1
	
	r3=q2%10;//1
	q3=q2/10;//0
	
	//sum=r1+r2+r3;*/
	
	//rather than using different variable use one variable and overwrite the next value and use it before overwriting
	rem = num %10;//5
	num=num/10;//14
	sum=sum+rem;//0+5=5
	
	rem=num%10;//4
	num=num/10;//1
	sum=sum+rem;//5+4=9
	
	rem=num%10;//1
	num=num/10;//0
	sum=sum+rem;//9+1=10
	
	//here are repeatation of steps to avoid that we use loops
	
	while(num>0){ //condition
		rem=num%10;
		num=num/10;//inc/dec
		sum=sum+rem;
		
	}
	
	printf("sum is %d",sum);
	
	
	
	
	
	
}