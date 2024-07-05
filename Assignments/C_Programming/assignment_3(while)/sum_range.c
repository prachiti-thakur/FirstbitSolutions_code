//sum of the number within given range
#include<stdio.h>
void main(){
	int start=5,end=10;
	int sum=0;
	
	int i=start;
	while(i<=end){
		sum=sum+i;
		i++;
	}
	printf("sum from %d to %d is %d",start,end,sum);
}