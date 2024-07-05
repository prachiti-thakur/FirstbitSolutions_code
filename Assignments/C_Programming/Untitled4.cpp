//fibonacci series
#include<stdio.h>
void main(){
	prefib1=0,prefib2=0;fib=0,end=15;
	if(prefib1==0 && prefib2==0){
		fib=prefib2+prefib1;
		printf("%d \t",fib);
		prefib1++;
		fib=prefib2+prefib1;
		printf("%d\t",fib);
	}
	
	while(fib<=end){
		prefib1=prefib2;
		prefib2=fib;
		fib=prefib2+prefib1;
		if(fib<=end){
			printf("%d\t",fib);
		}
	}
}