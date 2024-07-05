//print table
#include<stdio.h>
void main(){
	int num=2,a;
	int i=0;
	for(int i=0;i<10;)
	{
		a=++i;
		printf("%d * %d = %d \n",num,a,num*a);
		
	}
}