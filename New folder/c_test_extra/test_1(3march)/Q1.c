//Q1
#include<stdio.h>
void main(){
	int hr,min,sec,total=0;
	printf("Enter hr :");
	scanf("%d",&hr);
	printf("Enter min :");
	scanf("%d",&hr);
	printf("Enter sec:");
	scanf("%d",&hr);
	
	total=(hr*3600)+(min*60)+sec;
	
	printf("Total sec: %d ",total);
}