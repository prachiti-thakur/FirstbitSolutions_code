//can pass pointer to another pointer of same type
#include<stdio.h>
void main(){
	int a=10;
	int* iptr=&a;
	printf("iptr %d:",*iptr);
	int b=20;
	int* bptr=&b;
	printf("bptr %d:",*bptr);
	iptr=bptr;//can assign same type
	printf("iptr %d",*iptr);
	
	float f=10.6;
	float* fptr=&f;
	printf("fptr %f",*fptr);
	
	fptr=iptr;//'float *' from incompatible pointer type 'int *' [-Wincompatible-pointer-types]//it will run bcz float convert into int 12.54==>12 else 0
	printf("fptr %d",*fptr);
	
	
}