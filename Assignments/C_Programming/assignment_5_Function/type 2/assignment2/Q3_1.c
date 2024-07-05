//using scanf()//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>

//func declaratoins 
int add();
int sub();
int mul();
int div();
int mod();
char optor();


//main
void main(){
	
	char sign=optor();
	int res;

	if(sign=='+'){
		res=add();//call
		printf("Additon is %d",res);
	}
	else{
			if(sign=='-'){
				res=sub();//call
				printf("Substraction is %d",res);
			}
			else{
					if (sign=='*'){
							res=mul();//call
							printf("Multiplication is %d",res);
					}
					else{
							if(sign=='/'){
								res=div();//call
								printf(" Division is %d",res);
							}
							else{
									if(sign=='%'){
										res=mod();//call
										printf(" mod is %d",res);
									}
									else{
										
										printf("Invalid Inputs");
									}
							}
						}
				}
		}
		
	
}

//function defination

char optor(){
	char sgn;
	
	//when we use scanf with %c have to clear the buffer (\n \t enter tab space  etc)
	fflush(stdin);//to clean the buffer
	printf("Enter the sign:");
	scanf("%c",&sgn);
	
	return sgn;
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