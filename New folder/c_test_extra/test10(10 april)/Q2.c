//Q2
#include<stdio.h>
#include<string.h>
typedef struct Date{
	int day;
	int mon;
	int year;
}Date;
void main(){
	Date d;
	d.day=12;
	d.mon=2;
	d.year=1900;
	
	if(d.mon==2){
		//check for the leap year
		//century leaap year
		if(d.year%100==0){
			//century year
			if(d.year%400==0){
				//cent leap year
				//check for feb days
				if(d.day>29){
					printf("INValid in century leap yr");
				}
				else{
					printf("valid in century leap yr!!");
				}
			}
			else{
				// not cent leap year
				
				//check feb day for not leap year
				if(d.day>28){
					printf("Invalid in century not leap yr");
				}
				else{
					printf("Valid in century not leap yr");
				}
			}
		}
		else{
			//not century year
			if(d.year%4==0){//leap year
				//check feb days for leap
				if(d.day>29){
					printf("InValid in leap yr");
					
				}else{
					printf("Valid in leap yr");
					}
			}
			else{
				//not leap year
				if(d.day>28){
					printf("Invalid in not leap yr!!");
				}
				else{
					printf("Valid in not leap yr!");
				}
			}
		}
	}
	else{
		//for another months
		if(d.day<=30){
			//months of 30 months
			if(d.mon%2==0){
				//30 days month
				printf("Valid in 30 days mon");
			}
			else{
				printf("Invalid! in 30 days mon");
			}
		}
		else{
			if(d.day<=31){
				if(d.mon%2!=0){
					printf("Valid in 31 days mon");
				}
				else{
					printf("Invalid in 31 days mon");
				}
			}
		}
	}//out of outter else
}