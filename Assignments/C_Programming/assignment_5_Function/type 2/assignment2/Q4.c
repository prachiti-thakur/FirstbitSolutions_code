//using scanf
//4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations
#include<stdio.h>
int ch();
int even_odd();
float basic_s();

void main(){
	

	printf("1.even odd \n 2.basic_salary");
	int choice=ch();

	
	if(choice==1){
			int res=even_odd();
			if(res=0)
				printf("even number");
			else
				printf("odd number");
			
	}else{
		if(choice==2){
			float res=basic_s();
			
			printf("total salary is %f",res);
		}
		else{
			printf("\nInvalid inputs");
		}
	}
}

//function defination

int ch(){
	int choice;
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	return choice;
	
}
int even_odd(){
			int num;
		printf("\nEnter the number to check even odd :");
		scanf("%d",&num);
	
	
			if(num%2==0)
			{ 
				return 1;
			}
			else{
				return 0;
			}
			
}

float basic_s()
{
		

	float basic_s,total;
	float da,ta,hra; 
	
	printf("\nEnter the basic salary:");
			scanf("%f",&basic_s);
			
				if(basic_s<=5000){
					da=basic_s*0.1;
					ta=basic_s*0.2;
					hra=basic_s*0.25;
				}
				else{
					da=basic_s*0.15;
					ta=basic_s*0.20;
					hra=basic_s*0.25;
				}
				
				total=basic_s+da+ta+hra;
				return total;
}
