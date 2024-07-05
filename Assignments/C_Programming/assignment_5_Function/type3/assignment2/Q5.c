//using scanf()
/*Accept the price from user. Ask the user if he is a student (user may say yes or 
no). If he is a student and he has purchased more than 500 than discount is 20%
otherwise discount is 10%.But if he is not a student then if he has purchased 
more than 600 discount is 15% otherwise there is not discount*/
#include<stdio.h>
void billing(int);

void main(){
	
	printf("\n 1.student \n 2. not a student");
	
	int user;
	printf("\nEnter the user num:");
	scanf("%d",&user);
	
	billing(user);

	
}

//defination
void billing(int user){
	
	float bill,dis;
	printf("\nEnter the bill:");
	scanf("%f",&bill);
	float bill_ini=bill;
	
	if(user==1){
			if(bill>500){
				dis=bill*0.2;
				bill=bill-dis;
		
			}
			else{
				dis=bill*0.1;
				bill=bill-dis;
			
			}
	}else{
			if(user==2){
					if(bill>600){
						dis=bill*0.15;
						bill=bill-dis;
						
					}
					else{
						printf("no discount\n");
					}
			}
			else{
				printf("invalid inputs\n");
			}
	}
	
	
	printf("bill is %f",bill);
	
}