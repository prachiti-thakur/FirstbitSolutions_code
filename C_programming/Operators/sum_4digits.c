//4 digit 
#include <stdio.h>
void main(){
	int num=5461;
	int r1,r2,r3,r4,q1,q2,q3,q4;
	int sum;
	
	r1=num%10; //last digit//1
	q1=num/10; //546
	
	
	r2=q1%10;   //6
	q2=q1/10 ;   //54
	
	r3=q2%10;   //4
	q3=q2/10 ;  //5
	
	r4=q3%10;   //5
	q4=q3/10 ;	//0
	
	sum=r1+r2+r3+r4;
	
	printf("sum of the digits of %d is %d ",num,sum);
	
	
}
