//total salary 

#include<stdio.h>
void main(){
	float basic=3000,total;
	float da,ta,hra,a;
	
	if(basic<=5000){
		//printf("a is %f",a=10/100);// 10/100 it is internally is a int so int /int gives int therfore it gives o 
		//da=basic*(10/100); eihter make any one float or convert into  0.1
		da=basic*0.1;
		printf("\nda is %f",da);
		ta=basic*0.2;
		printf("\nta is %f",ta);
		hra=basic*0.25;
		printf("\nhra is %f",hra);
		
	}
	else{
		da=basic*(15/100);
		ta=basic*(20/100);
		hra=basic*(25/100);
	}
	
	total=basic+da+ta+hra;
	printf("\nThe total salary is %f",total);
}