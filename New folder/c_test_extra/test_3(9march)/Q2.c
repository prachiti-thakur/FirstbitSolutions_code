//Q2 wap to add alternate number
#include<stdio.h>
void main(){
	int start,end;
	printf("\nEnter start :");
	 scanf("%d",&start);
	 
	 printf("\nEnter end :");
	 scanf("%d",&end);
	 
	 int sum=0;
	 
	 while(start<=end){
	 	sum=sum+start;
	 	start=start+2;
	 }
	 
	 printf("sum :%d",sum);
}