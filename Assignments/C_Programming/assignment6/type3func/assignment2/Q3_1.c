//using scanf()//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without using scanf)
#include<stdio.h>
void add(int*,int*);
void sub(int*,int*);
void div(int*,int*);
void mul(int*,int*);
void mod(int*,int*);
void choice(char*);

void main(){
	char sign;
	
	//when we use scanf with %c have to clear the buffer (\n \t enter tab space  etc)
	fflush(stdin);//to clean the buffer
	printf("Enter the sign:");
	scanf("%c",&sign);
	
	choice(&sign);

}

//func definations

void choice(char* sign){
	
	
	
	
	if((*sign)=='+'){
			int num1,num2;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	
	printf("Enter num2 :");
	scanf("%d",&num2);
	
			add(&num1,&num2);
	}
	else{
			if((*sign)=='-'){
				int num1,num2;
				
				printf("Enter num1 :");
				scanf("%d",&num1);
				
				printf("Enter num2 :");
				scanf("%d",&num2);
				
				sub(&num1,&num2);	
			}
			else{
					if ((*sign)=='/'){
						
							int num1,num2;
	
							printf("Enter num1 :");
							scanf("%d",&num1);
							
							printf("Enter num2 :");
							scanf("%d",&num2);
							
						div(&num1,&num2);
					}
					else{
							if((*sign)=='*'){
									int num1,num2;
	
									printf("Enter num1 :");
									scanf("%d",&num1);
									
									printf("Enter num2 :");
									scanf("%d",&num2);
								mul(&num1,&num2);
							}
							else{
									if((*sign)=='%'){
										int num1,num2;
	
										printf("Enter num1 :");
										scanf("%d",&num1);
										
										printf("Enter num2 :");
										scanf("%d",&num2);
										
										mod(&num1,&num2);
									}
									else{
										printf("Invalid Inputs");
									}
							}
						}
				}
		}
}
void add(int* num1,int* num2){
	int res=(*num1)+(*num2);
	printf("Addition is %d",res);
}

void sub(int* num1,int* num2){
	int res=(*num1)-(*num2);
	printf("substraction is %d",res);
}

void div(int* num1,int* num2){
	int res=(*num1)/(*num2);
	printf("division is %d",res);
}

void mul(int* num1,int* num2){
	int res=(*num1)*(*num2);
	printf("multiplication is %d",res);
}

void mod(int* num1,int* num2){
	int res=(*num1)%(*num2);
	printf("modulation is %d",res);
}

