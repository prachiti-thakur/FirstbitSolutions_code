//Q2
#include<stdio.h>
void main(){
	int year=1900;
	if(year%100!=0){
			if(year%4==0){
				printf("this is leap year");
			}
			else{
				printf("This is not leap year");
			}
	}
	else{
		if(year%400==0){
			printf("this is leap year");
		}else{
				printf("This is not leap year");
			}
	}
	
}