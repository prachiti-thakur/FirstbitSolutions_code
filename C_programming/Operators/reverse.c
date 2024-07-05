//reverse of the number

#include<stdio.h>
void main(){
	int num=123;
	int r1,r2,r3;
	int q1,q2,q3;
	int rev;
	
	r1=num%10;//3
	q1=num/10; //12
	
	r2=q1%10;//2
	q2=q1/10;//1
	
	r3=q2%10;//1
	q3=q2/10;//0
	
	rev=(r1*100)+(r2*10)+(r3*1);
	
	printf("reverse of the num %d is %d",num,rev);
}
