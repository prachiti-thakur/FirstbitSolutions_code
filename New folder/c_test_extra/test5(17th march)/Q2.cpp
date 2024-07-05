//test
#include<stdio.h>
void main(){
	float balance=5000;
	int choice;
	do {
		printf("1.deposite \n 2. withdraw\n \0. Exit");
		scanf("%d"&choice);
		
		if(choice==1){
			
		
			deposite(&balance);//call
		}
		else{
		
			withdraw(&balance);
		}
	}while(choice!=0)
}


//function defination
void deposite(float* balance )
{
		float amt;
			printf("Enter the amount:");
			scanf("%f",&amt);
			
			*balance=*balance+amt;
			
			printf("Updated amount:%f",*balance);
			
}

void withdraw(float* balance){
	float amt;
			printf("Enter the amount:");
			scanf("%f",&amt);
			if(amt>3000){
				*balance=*balance-amt;
				printf("Updated amount:%f",*balance);
			
			}else{
				printf("Can't Withdraw the amount !!\n Balance is not sufficient!!'");
			}
}