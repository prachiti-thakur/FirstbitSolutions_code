////function without parameters without returntype
//using scanf()//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>

//declaration
void sum();
void sub();
void multi();
void mod();

void main(){
	
	char sign;
	
	
	//when we use scanf with %c have to clear the buffer (\n \t enter tab space  etc)
	fflush(stdin);//to clean the buffer
	printf("Enter the sign:");
	scanf("%c",&sign);
	
	if(sign=='+'){
		sum();
	}
	else{
			if(sign=='-'){
				
					sub();
			}
			else{
					if (sign=='/'){
							
						div();
					}
					else{
							if(sign=='*'){
									
									multi();
							}
							else{
									if(sign=='%'){
									
									
											mod();
									
									}
									else{
										printf("Invalid Inputs");
									}
							}
						}
				}
		}
		
}
	
	


void sum(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
			res=num1+num2;
			
	printf("addition is %d",res);

	
}


void sub(){
	
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1-num2;
	
		printf("sub is %d",res);
	
	
}

void multi(){
	
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1*num2;
	
		printf("multiplication is %d",res);
	
}

void mod(){
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1%num2;
	
		printf("mod is %d",res);
}

void div(){
		int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=num1/num2;
	
		printf("div is %d",res);
}