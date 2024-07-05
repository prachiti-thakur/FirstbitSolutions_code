
//using scanf()//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>

//declaration
int sum(int,int);
int sub(int,int);
int multi(int,int);
int mod(int,int);

void main(){
	
	char sign;
	int num1,num2,res;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	//when we use scanf with %c have to clear the buffer (\n \t enter tab space  etc)
	fflush(stdin);//to clean the buffer
	printf("Enter the sign:");
	scanf("%c",&sign);
	
	if(sign=='+'){
		res=sum(num1,num2);
		printf("Addition is %d",res);
	}
	else{
			if(sign=='-'){
				
					res=sub(num1,num2);
					printf("sub is %d",res);
			}
			else{
					if (sign=='/'){
							
						res=div(num1,num2);
						printf("div is %d",res);
					}
					else{
							if(sign=='*'){
									
								res=multi(num1,num2);
								printf("multiplication is %d",res);
							}
							else{
									if(sign=='%'){
									
									
										int res=mod(num1,num2);
										printf("mod is %d",res);
									}
									else{
										printf("Invalid Inputs");
									}
							}
						}
				}
		}
		
}
	
	


int sum(int num1,int num2){
		int	res=num1+num2;
		return res;	
}


int sub(int num1,int num2){

	
 	int res=num1-num2;
 	return res;	
}

int multi(num1,num2){
	
	int res=num1*num2;
	
	return res;
	
}

int mod(num1,num2){

	
	int res=num1%num2;
	return res;
	
}

int div(num1,num2){
	
	
	int res=num1/num2;
	return res;
	
}