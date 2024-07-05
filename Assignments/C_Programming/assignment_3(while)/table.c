//print table
#include<stdio.h>
void main(){
	int num=2,a;
	int i=0;

	while(i<10){
		a=++i;
		printf("%d * %d = %d \n",num,a,num*a);
		
	}
}