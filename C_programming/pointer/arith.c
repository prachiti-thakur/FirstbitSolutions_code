//ptr arithmetic
#include<stdio.h>
void main(){
	int a=10;
	int*ptr=&a;
	printf("a %d\n",a);
	printf("ptr %u\n",ptr);
	printf("ptr+0 %u \n",ptr+0);
	printf("ptr+1 %u \n",ptr+1);
	printf("ptr+2 %u \n",ptr+2);
	printf("ptr+3 %u \n",ptr+3);
	
	char b='M';
	char* cptr=&b;
	printf("b %c\n",b);
	printf(" cptr %u\n",cptr);
	printf("cptr+0 is %u\n",cptr+0);
	printf("cptr+1 %u\n",cptr+1);
	printf("cptr+2 %u\n",cptr+2);
	
	
	
}