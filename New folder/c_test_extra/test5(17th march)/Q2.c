//test
#include<stdio.h>
void deposite(float*);
void withdraw(float*);

void main(){
	float balance=5000;
	int choice;
	do {
		printf("\n\n1.deposite \n 2. withdraw \n 0. Exit");
		printf("\n Enter the choice:");
		scanf("%d",&choice);
		
		if(choice==1){
			
		
			deposite(&balance);//call
		}
		else{
		
			withdraw(&balance);
		}
	}while(choice!=0);
}


//function defination
void deposite(float* balance )
{
		float amt;
			printf("\nEnter the amount:\n");
			scanf("%f",&amt);
			
			*balance=*balance+amt;
			
			printf("\nUpdated balance:%f\n",*balance);
			
}

void withdraw(float* balance){

			if((*balance)>3000){
			float amt;
			printf("\nEnter the amount:");
			scanf("%f",&amt);
			
				*balance=*balance-amt;
				printf("\nUpdated balance:%f\n",*balance);
			
			}else{
				printf("\nCan't Withdraw the amount !!\n Balance is not sufficient!!\n");
			}
}