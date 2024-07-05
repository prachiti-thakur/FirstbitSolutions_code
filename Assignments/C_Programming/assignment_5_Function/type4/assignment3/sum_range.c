//sum of the number within given range
#include<stdio.h>
int sum_range(int,int);//declaration

void main(){
	int s=5,e=10,r;
	r=sum_range(s,e);//call;
	printf("Sum is %d",r);
}

int sum_range(int start,int end){
	
	int sum=0;
	
	int i=start;
	while(i<=end){
		sum=sum+i;
		i++;
	}
	
	return sum;
}