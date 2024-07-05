//sum of the number within given range
#include<stdio.h>
int sum_range();//declaration

void main(){
	int sum=sum_range();//call;
	printf("Sum is %d",sum);
}

int sum_range(){
	int start=5,end=10;
	int sum=0;
	
	int i=start;
	while(i<=end){
		sum=sum+i;
		i++;
	}
	
	return sum;
}