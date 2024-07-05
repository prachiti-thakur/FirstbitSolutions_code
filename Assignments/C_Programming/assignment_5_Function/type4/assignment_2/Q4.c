
//using scanf
//4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations
#include<stdio.h>

//declaration
int even_Odd(int);
float basic_salary(float);

void main(){
	
	int choice=2;
	printf("1.even odd \n 2.basic_salary");
	
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	

	if(choice==1){
		
		int num,n;
		printf("\nEnter the number to check even odd :");
		scanf("%d",&num);
		n=even_Odd(num);
		if(n==1)
		printf("Even");
		else
		printf("odd");
			
	}else{
		
			
		if(choice==2){
			float basic_s,t;
			printf("\nEnter the basic salary:");
			scanf("%f",&basic_s);
			
			t=basic_salary(basic_s);
			printf("Total salary is %f",t);
		}
		else{
			printf("\nInvalid inputs");
		}
	}
}


//definations 
int even_Odd(int num){
		
	
	
			if(num%2==0)
			{ 
				return 1;
			}
			else{
				return 0;
			}
}

float basic_salary(float basic_s){
	
	float total;
	float da,ta,hra; 
	
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
