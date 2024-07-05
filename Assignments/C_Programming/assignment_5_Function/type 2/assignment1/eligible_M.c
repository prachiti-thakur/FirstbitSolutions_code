//eligible for marriage 
#include<stdio.h>
int eligible();
void main(){
	
	int res=eligible();
	if(res==1){
		printf("Eligible");
	}
	else{
		if(res==0){
			printf("Not eligible");
		}
		else{
		if(res== -1)
		printf("Invalid Inputs");
	}
	}
	
}
int eligible(){
	char gender;//input either 'F' or 'M'
	fflush(stdin);
	printf("M=male\n F=female\n");
	printf("Enter gender :");
	scanf("%c",&gender);
	
	int age;
	
	if(gender=='F'){
		printf("Enter the age:");
		scanf("%d",&age);
		
		if(age>=18){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(gender=='M'){
			
		printf("Enter the age:");
		scanf("%d",&age);
		
			if(age>=21){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return -1;
		}
	}
}