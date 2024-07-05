//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>
void main(){
	char sign='%';
	int num1=50,num2=20,res;
	
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