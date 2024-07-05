//using scanf()//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>
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
		res=num1+num2;
	}
	else{
			if(sign=='-'){
				res=num1-num2;
			}
			else{
					if (sign=='/'){
						res=num1/num2;
					}
					else{
							if(sign=='*'){
								res=num1*num2;
							}
							else{
									if(sign=='%'){
										res=num1%num2;
									}
									else{
										printf("Invalid Inputs");
									}
							}
						}
				}
		}
		
		printf("the operator is %c and the num1 is %d and num2 is %d result is %d",sign,num1,num2,res);
}