//menu driven (assignment no)
#include<stdio.h>
//declarations
void sum();
void  rev();
void prime();
void even_Odd();
void armstrong();
void perfect();
void strong();
void palindrome();
void table();
void factors();


void main(){
	
	printf("\n 1.sum of the digits\n 2.reverse \n 3.prime \n 4.even odd \n 5.Armstrong \n 6.perfect \n 7.strong \n 8.palindrome \n 9.table\n 10.factors");
	int choice;
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	if(choice==1){
		sum();
	}else{
		if(choice==2){
			rev();
		}else{
			if(choice==3){
				 prime();
			}
			else{
				if(choice==4){
					even_Odd();
				}else{
					if(choice==5){
						armstrong();
					}else{
						if(choice==6){
							perfect();
						}
						else{
							if(choice==7){
								strong();
							}
							else{
								if(choice==8){
									palindrome();
								}
								else{
								if(choice==9){
									table();
								}
								else{
									if(choice==10){
										factors();
									}
									else{
										printf("invalid");
									}
								}	
							}
						}
					}
				}
			}
		}
	}
} 


}



//functions definations
void sum(){
	int num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	int rem;
	while(num>0){
		
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	
	
	
	
	printf("\nThe sum of the digit is %d ",sum);
	
	
}

void  rev(){
	int num,rev=0,rem;
		printf("Enter the number:");
		scanf("%d",&num);
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	
	printf("\nThe reverse of the number is %d",rev);
}

void prime(){
	int num;
	printf("Enter the num :");
	scanf("%d",&num);
	int i=2;
	while(i<num){
		if(num%i!=0){
			i++;
		}
		else{
			break;
		}
	}
	
	if(i==num){
		printf("Number is prime");
	}
	else{
		printf("number is not prime");
	}
}

void even_Odd(){
		int num;
		printf("\nEnter the number to check even odd :");
		scanf("%d",&num);
	
	
			if(num%2==0)
			{ 
			printf("\neven number");
			}
			else{
				printf("\nodd number");
			}
}


void armstrong(){
	int num,rem;
	printf("Enter the num:");
	scanf("%d",&num);
	 
	int num_O=num;
	int num_2=num;
	int sum_P=0;
	
	int count=0;
	while(num>0){
		num=num/10;
		count++;
	}
	
	while(num_2>0){
		rem=num_2%10;
		num_2=num_2/10;//dec
													//pow(base,power)
													//power=pow(rem,count);
		//by using loop // to calculate the power as per count
				int power=1;
				int cnt=count;
				
					while(cnt!=0){
						power=power*rem;
						cnt--;
					}
					
		sum_P=sum_P+power;
	}
	
	
	
	if(num_O==sum_P)
	{
		printf("%d is armstrong number",num_O);
		
	}
	else{
		printf("%d is not an armstrong number",num_O);
	}
	
}



void perfect(){
	
	int num,sum_Fac=0;
	printf("Enter the num:");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum_Fac=sum_Fac+i;//adding factors here
		}
	}
	
	// check it is perfect number or not 
	if(num==sum_Fac){
		printf("It is a perfect number %d",num);
		
	}
	else{
		printf("It is not a perfect number %d",num);
	}
}


void strong(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	int num_O=num,rem,sum_fact=0;
	while(num>0){
		rem=num%10;
		num=num/10;//inc /dec
			//for factorial
			int fact=1;//for each iteration it must be 1 initialy
				while(rem>0){
					fact=fact*rem;
					rem--;
					
				}
		sum_fact=sum_fact+fact;
	}
	
	//check the sum of fact of each digit 
	if(num_O==sum_fact){
		printf("It is strong number %d",num_O);
	}
	else{
		printf("It is not strong number %d",num_O);
	}
}

void palindrome(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	int num_O=num,rev=0;
	// seperate the digits 
	int rem=0;
	
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	
	if(rev==num_O){
		printf("The number is palindrom %d",num_O);
		
	}
	else{
		printf("The number is not palindrom %d ",num_O);
	}
}

void table(){
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	int i=1;
	while(i<=10){
		printf("%d * %d =%d\n",num,i,num*i);
		i++;
	}
}

void factors(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	
	int i=2;
	printf("Factors of %d are:",num);
	while(i<num){
		
		if(num%i==0){
			printf("\n %d\t",i);
		}
		i++;
	}
}