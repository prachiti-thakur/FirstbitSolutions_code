//sum of the number within given range
#include<stdio.h>
//declaration
void sum_range();

void main(){
	sum_rang();//call
}

//defination
void sum_rang(){
		int start,end;
	printf("Enter the start: ");
	scanf("%d",&start);
	
	printf("Enter the end : ");
	scanf("%d",&end);
	
	int sum=0;
	
	int i=start;
	while(i<=end){
		sum=sum+i;
		i++;
	}
	printf("sum from %d to %d is %d",start,end,sum);
}