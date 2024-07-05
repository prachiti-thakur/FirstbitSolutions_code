//fibonacci series
#include<stdio.h>
void main(){
	int prefib1=0,prefib2=0,fib=0,end;
	
	printf("Enter the range 0 to :");
	scanf("%d",&end);
	//solution to handle the infinity condition  1 1 1 1 -->(if)
	if(prefib1==0 && prefib2==0){
			fib=prefib2+prefib1;
			printf("%d \t",fib);
			prefib1++;
			fib=prefib2+prefib1;
			printf("%d\t",fib);
	}
	
	while(fib<=end)
	{
			prefib1=prefib2;
			prefib2=fib;
			fib=prefib2+prefib1;
			if(fib<=end){
				printf("%d\t",fib);
			}
	}
	
}