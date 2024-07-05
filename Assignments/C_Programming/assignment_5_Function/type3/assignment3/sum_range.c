//sum of the number within given range
#include<stdio.h>
void sum_range(int,int);//declaration

void main(){
	int s=5,e=10;
	sum_range(s,e);//call;
	
}

void sum_range(int start,int end){
	
	int sum=0;
	
	int i=start;
	while(i<=end){
		sum=sum+i;
		i++;
	}
	
	printf("Sum is %d",sum);
}