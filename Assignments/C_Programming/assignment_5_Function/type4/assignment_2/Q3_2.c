
//using scanf
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)
#include<stdio.h>

//declaration
int add(int,int);
int sub(int,int);
int div(int,int);
int multi(int,int);
int mod(int,int);


void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod \n\n");
	int choice;
	
	printf("Enter choice:");
	scanf("%d",&choice);
	
	if(choice==1){
		
	int num1,num2,res;
	printf("Enter num1:");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	res=add(num1,num2);	//call
	printf("addition is %d :",res);
	
	}else{
			if(choice==2){
				
			int num1,num2,res;
			printf("Enter num1:");
			scanf("%d",&num1);
			
			printf("Enter num2 :");
			scanf("%d",&num2);
			
			res=sub(num1,num2);	//call
			printf("substraction is %d :",res);
			
			
			}
			else{
					if(choice==3){
						
							int num1,num2,res;
							printf("Enter num1:");
							scanf("%d",&num1);
							
							printf("Enter num2 :");
							scanf("%d",&num2);
							
							res=div(num1,num2);	//call
							printf("div is %d :",res);
					}
					else{
							if(choice==4){
								
									int num1,num2,res;
										printf("Enter num1:");
										scanf("%d",&num1);
										
										printf("Enter num2 :");
										scanf("%d",&num2);
										
										res=multi(num1,num2);	//call
										printf("multiplication is %d :",res);
								
								
							}else{
									if(choice==5){
									
									int num1,num2,res;
									printf("Enter num1:");
									scanf("%d",&num1);
									
									printf("Enter num2 :");
									scanf("%d",&num2);
									
									res=mod(num1,num2);	//call
									printf("addition is %d :",res);
									
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

int add(int num1,int num2){

	int res=num1+num2;
	return res;
}

int sub(int num1,int num2){
	
	
	int res=num1-num2;
	return res;
}

int multi(int num1,int num2){
	
	int res=num1*num2;
	return res;
}

int div(int num1,int num2){
	
	
	int res=num1/num2;
	return res;
}

int mod(int num1,int num2){

	
	int res=num1%num2;
	return res;
}