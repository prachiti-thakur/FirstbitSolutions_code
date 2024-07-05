//using scanf
//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desiredoperations.(without scanf)
#include<stdio.h>
void opt(int*);
void add(int*,int*);
void sub(int*,int*);
void mul(int*,int*);
void div(int*,int*);
void mod(int*,int*);


void main(){
	printf("\n 1.add \n 2. sub \n 3.div \n 4.mul \n 5.mod \n\n");
	
	int choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	opt(&choice);
		
		
}

//function defination

void opt(int* choice){
		
	if((*choice)==1){
		
			int num1,num2;
			printf("Enter num1:");
			scanf("%d",&num1);
			
			printf("Enter num2:");
			scanf("%d",&num2);
			
			add(&num1,&num2);
		
	}else{
			if((*choice)==2){
				int num1,num2;
				printf("Enter num1:");
				scanf("%d",&num1);
				
				printf("Enter num2:");
				scanf("%d",&num2);
				
				sub(&num1,&num2);
			}
			else{
					if((*choice)==3){
						
						int num1,num2;
						printf("Enter num1:");
						scanf("%d",&num1);
						
						printf("Enter num2:");
						scanf("%d",&num2);
						
						mul(&num1,&num2);
						
					}
					else{
							if((*choice)==4){
								
								int num1,num2;
								printf("Enter num1:");
								scanf("%d",&num1);
								
								printf("Enter num2:");
								scanf("%d",&num2);
								
								div(&num1,&num2);
								
							
							}else{
									if((*choice)==5){
										
										
										int num1,num2;
										printf("Enter num1:");
										scanf("%d",&num1);
										
										printf("Enter num2:");
										scanf("%d",&num2);
										
										mod(&num1,&num2);
									}
									else{
										printf("\nInvalid Inputs");
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


void mul(int* num1,int* num2){
		int res=(*num1)*(*num2);
		printf("multiplication is %d",res);
}


void div(int* num1,int* num2){
		int res=(*num1)/(*num2);
		printf("Division is %d",res);
}


void mod(int* num1,int* num2){
		int res=(*num1)%(*num2);
		printf(" mod is %d",res);
}


