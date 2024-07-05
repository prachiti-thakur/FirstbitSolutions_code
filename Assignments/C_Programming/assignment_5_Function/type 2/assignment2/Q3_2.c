//using scanf
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)

//function declaration
int add();
int sub();
int mul();
int div();
int mod();
int optor();

#include<stdio.h>
void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod \n\n");
	
	int choice=optor();
	int res;
	
	if(choice==1){
		int res=add();
		printf("addition is %d",res);
	}else{
			if(choice==2){
				int res=sub();
				printf("Substraction is %d",res);
			}
			else{
					if(choice==3){
						int res=mul();
						printf("multiplication is %d",res);
					}
					else{
							if(choice==4){
								int res=div();
								printf("Division is %d",res);
							}else{
									if(choice==5){
										int res=mod();
										printf("mod is %d",res);
									}
									else{
										printf("\nInvalid Inputs");
									}
							}
					}
			}
		}
		
		
}

//function defination

int optor(){
	int choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	return choice;
}

int add(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1+num2;
	return res;
}

int sub(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1-num2;
	return res;
}

int mul(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1*num2;
	return res;
}

int div(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1/num2;
	return res;
}

int mod(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1%num2;
	return res;
}