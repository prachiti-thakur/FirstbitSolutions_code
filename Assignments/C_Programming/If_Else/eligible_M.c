//eligible for marriage 
#include<stdio.h>
void main(){
	/*
	int male_age=20;
	int female_age=21;
	
	if(male_age>=21&&female_age>=18){
		printf("eligible for marriage");
	}
	else{
		printf("not eligible");
	}
	*/
	
	char gender='M';//input either 'F' or 'M'
	int age=18;
	
	if(gender=='F'){
		if(age>=18){
			printf("Female is eligible for Marriage");
		}
		else{
			printf("female is not eligible");
		}
	}
	else{
		if(gender=='M'){
		
			if(age>=21){
				printf("Male is eligible for marriage");
			}
			else{
				printf("Male is not eligible");
			}
		}
		else{
			printf("invaild input");
		}
	}
}