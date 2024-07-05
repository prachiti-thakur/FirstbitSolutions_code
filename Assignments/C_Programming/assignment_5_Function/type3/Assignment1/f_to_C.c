#include<stdio.h>
void f(float);
void main(){
	float C=12.3;
	f(C);
}

void f(float c){
	float F;
	
	F=(c*9/5)+32;
	printf(" c is %f and its F is %f",c,F);
}