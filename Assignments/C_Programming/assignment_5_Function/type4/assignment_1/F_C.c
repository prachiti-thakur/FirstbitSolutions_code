
//findind F from C (temp)
#include<stdio.h>
float F_C(float);
void main(){
	float C=12.3;
	float feri=F_C(C);
	printf("F is %f",feri);
}


float F_C(float C){
	float F;
	F=(C*9/5)+32;
	return F;
}