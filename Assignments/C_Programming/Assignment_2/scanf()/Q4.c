//using scanf
//4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations
#include<stdio.h>
void main(){
	
	int choice=2;
	printf("1.even odd \n 2.basic_salary");
	
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	

	
	int num;
	float basic_s,total;
	float da,ta,hra; 
	
	
	
	if(choice==1){
		
		
		printf("\nEnter the number to check even odd :");
		scanf("%d",&num);
	
	
			if(num%2==0)
			{ 
			printf("\neven number");
			}
			else{
				printf("\nodd number");
			}
			
	}else{
		if(choice==2){
			
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
				printf("\nThe basic salary is %f and the total is %f",basic_s,total);
		}
		else{
			printf("\nInvalid inputs");
		}
	}
}