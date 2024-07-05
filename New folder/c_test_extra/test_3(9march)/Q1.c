//wap print even and odd number in given range
//start =10 end=25
//o/p:odd:11 13 15...
//start=1 end =15
//o/p :even : 2 4 6 8
#include<stdio.h>
void main(){
	int start,end;
	printf("For odd:\n");
	printf("\nEnter start :");
	 scanf("%d",&start);
	 
	 printf("\nEnter end :");
	 scanf("%d",&end);
	 
	 printf("Odd:");
	 
	 while(start<=end){
	 	if(start%2!=0){
	 		printf("%d\t",start);
	 		
		 }
		 start++;
	 }
	 
	 ///////////////////////////////
	 printf("\nFor even\n");
	int s,e;
	printf("Enter start :");
	 scanf("%d",&s);
	 
	 printf("\nEnter end :");
	 scanf("%d",&e);
	 
	 printf("Even:");
	 while(s<=e){
	 	
	 	if(s%2==0){
	 		
	 		printf("%d\t",s);
	 		
		 }
		 s++;
	 }
	
	
} 

