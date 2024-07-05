//function without parameters without returntype
//findind F from C (temp)
#include<stdio.h>
void F_C();
void main(){
	
	F_C();
}
void F_C(){
	float C=12.3;
	float F;
	
	F=(C*9/5)+32;
	printf(" c is %f and its F is %f",C,F);
}
