//sizeOf()
#include<stdio.h>
void main(){
	int a;
	printf("int %d\n",sizeof(a));
	float b;
	printf("float %d\n",sizeof(b));
	char c;
	printf("char %d\n",sizeof(c));
	double d;
	printf("double %d\n",sizeof(d));
	
	//void v;//variable or field 'v' declared void
	printf("void %d \n",sizeof(void));//sizeof void is 1 in devcpp 6.3
	
	int ab;
	int* iptr=&ab;
	printf("size of iptr %d\n",sizeof(iptr));//pointer variable
	
	float abc;
	float* fptr;
	printf("size of fptr %d\n",sizeof(fptr));
	
	///pointer 
	//(address)
	int xyz=10;
	int* intptr=&xyz;
	printf("xyz is %d\n",xyz);
	printf("&xyz is %u\n",&xyz);
	printf("inptr is %u\n ",intptr);
	printf("*inptr is %d\n",*intptr);
	
	
	
}