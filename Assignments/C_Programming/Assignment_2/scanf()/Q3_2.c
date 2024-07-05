//using scanf
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)
#include<stdio.h>
void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod \n\n");
	int num1,num2,res;
	int choice;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2");
	scanf("%d",&num2);
	
	printf("Enter choice:");
	scanf("%d",&choice);
	
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