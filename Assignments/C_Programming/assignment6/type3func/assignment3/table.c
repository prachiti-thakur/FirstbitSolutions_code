//print table
#include<stdio.h>
void table(int*);//declaration

void main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	//func call
	table(&num);
}

//defination
void table(int* num){
	int a;
	int i=0;

	while(i<10){
		a=++i;
		printf("%d * %d = %d \n",(*num),a,(*num)*a);
		
	}
}