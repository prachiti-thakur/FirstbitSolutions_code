////function without parameters without returntype
//using scanf
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)
#include<stdio.h>

//declaration
void add();
void sub();
void div();
void multi();
void mod();


void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod \n\n");
	int choice;
	
	printf("Enter choice:");
	scanf("%d",&choice);
	
	if(choice==1){
	
		add();	
	
	}else{
			if(choice==2){
				sub();
			}
			else{
					if(choice==3){
						div();
					}
					else{
							if(choice==4){
								
								multi();
								
								
							}else{
									if(choice==5){
									
										mod();
									}
									else{
										printf("\nInvalid Inputs");
									}
							}
					}
			}
		}
		
		
}



//defination

void add(){
	int num1,num2,res;

	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
		res=num1+num2;
	printf("addition is %d :",res);
}

void sub(){
	int num1,num2,res;
	
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
		res=num1-num2;
	printf("sub is %d :",res);
}

void multi(){
	int num1,num2,res;
	int choice;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
		res=num1*num2;
	printf("multipliation is %d :",res);
}

void div(){
	int num1,num2,res;

	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
		res=num1/num2;
	printf("division is %d :",res);
}

void mod(){
	int num1,num2,res;

	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
		res=num1%num2;
	printf("mod is %d :",res);
}