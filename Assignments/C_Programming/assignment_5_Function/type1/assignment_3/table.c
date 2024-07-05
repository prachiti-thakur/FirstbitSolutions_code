//print table
#include<stdio.h>
void table();
void main(){
	table();	
}
void table(){
	int num,a;
	printf("Enter the num :");
	scanf("%d",&num);
	int i=0;

	while(i<10){
		a=++i;
		printf("%d * %d = %d \n",num,a,num*a);
		
	}
}