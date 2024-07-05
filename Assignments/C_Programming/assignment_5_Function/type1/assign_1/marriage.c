

//function without parameters without returntype
//eligible for marriage 
#include<stdio.h>
void eligible();
void main(){
		
	eligible();
}
void eligible(){
		
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