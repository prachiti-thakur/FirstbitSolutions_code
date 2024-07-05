//eligible for marriage 
#include<stdio.h>
void eligibility(char);
void main(){
	
	
	char gender;//input either 'F' or 'M'
	printf("Enter the Gender:");
	scanf("%c",&gender);
	eligibility(gender);
	
	
	
}

void eligibility(char g){
	int age;
	
	if(g=='F'){
		
		printf("Enter age:");
		scanf("%d",&age);
		
		if(age>=18){
			printf("Female is eligible for Marriage");
		}
		else{
			printf("female is not eligible");
		}
	}
	else{
		if(g=='M'){
			
		printf("Enter age:");
		scanf("%d",&age);
		
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