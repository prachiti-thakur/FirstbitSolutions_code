#include<stdio.h>
float f_from_c();
void main(){
	float f=f_from_c();
	printf("F is %f",f);
}
float f_from_c(){
	float C=12.3;
	float F;
	
	F=((C*9)/5)+32;
	//printf("F is %d",F);
	return F;
}