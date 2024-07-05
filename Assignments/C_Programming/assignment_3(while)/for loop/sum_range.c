//sum of the number within given range
#include<stdio.h>
void main(){
	int start=5,end=10;
	int sum=0;
	

	for(int i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	printf("sum from %d to %d is %d",start,end,sum);
}