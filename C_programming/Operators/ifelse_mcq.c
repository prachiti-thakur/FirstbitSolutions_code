//if else 
#include<stdio.h>
 void main(){
/*
	int a=10;
	
	if (a){
		printf("hello");
		
	}
	else{
		printf("bye");
	}
	
	*/

/*	
	int a=10;
	if(a)
		printf("hello");
		printf("bye");
	else
		printf("xyz");
		*/
		
		
		int year=1900;
		if(year%100!=0){
			if(year%4==0){
				printf("this is leap year")
			}
			else
				printf("this is not a leap year");
		}
		else{
			if(year%400==0){
				printf("This is leap year");
			}
			else
				printf("this is not a leap year");
		}
	
}
