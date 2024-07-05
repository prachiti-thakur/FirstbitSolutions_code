//using scanf
//4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then based on that perform the desired operations
#include<stdio.h>

void even_Odd(int*);
void salary(float*);
void menu(int*);

void main(){
	int choice=2;
	printf("1.even odd \n 2.basic_salary");
	
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	menu(&choice);
}


//function definations

void menu(int* choice){

	
	
	if((*choice)==1){
		
				int num;
		 		printf("\nEnter the number to check even odd :");
				scanf("%d",&num);
				even_Odd(&num);
					
	}else{
		if((*choice)==2){
			float basic_s;
			printf("\nEnter the basic salary:");
			scanf("%f",&basic_s);
			salary(&basic_s);
				
	}else{
		printf("choice is invalid");
	}
}

}
 void even_Odd(int* num){
 		
	
	
			if((*num)%2==0)
			{ 
			printf("\neven number");
			}
			else{
				printf("\nodd number");
			}
 }
 
 
 void salary(float* basic_s){
 			
 			
 			float da,ta,hra,total; 
	
		 	if((*basic_s)<=5000){
							da=(*basic_s)*0.1;
							ta=(*basic_s)*0.2;
							hra=(*basic_s)*0.25;
			}
			else{
							da=(*basic_s)*0.15;
							ta=(*basic_s)*0.20;
							hra=(*basic_s)*0.25;
				}
						
						total=(*basic_s)+da+ta+hra;
						printf("\nThe basic salary is %f and the total is %f",(*basic_s),total);
						
}
			
			
 