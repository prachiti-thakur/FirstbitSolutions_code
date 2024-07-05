//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)
#include<stdio.h>
void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod");
	int num1=10,num2=20,res;
	int choice=1;
	
	if(choice==1){
		res=num1+num2;
	}else{
			if(choice==2){
				res=num1-num2;
			}
			else{
					if(choice==3){
						res=num1/num2;
					}
					else{
							if(choice==4){
								res=num1/num2;
							}else{
									if(choice==5){
										res=num1%num2;
									}
									else{
										printf("\nInvalid Inputs");
									}
							}
					}
			}
		}
		
		printf("\n the choice is %d and num1 is %d num2 is %d res is %d",choice,num1,num2,res);
}