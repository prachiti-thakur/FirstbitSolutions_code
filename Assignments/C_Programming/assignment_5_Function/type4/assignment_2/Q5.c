

//using scanf()
/*Accept the price from user. Ask the user if he is a student (user may say yes or 
no). If he is a student and he has purchased more than 500 than discount is 20%
otherwise discount is 10%.But if he is not a student then if he has purchased 
more than 600 discount is 15% otherwise there is not discount*/
#include<stdio.h>

//declaration
float billing(float);


void main(){
	float bill,d;
	printf("\nEnter the bill:");
	scanf("%f",&bill);

	d=billing(bill);
	printf("bill is %f",d);
	
	
	
}

float billing(float bill){
	
	float dis;
	
	printf("\n 1.student \n 2. not a student");
	
	int user;
	printf("\nEnter the user num:");
	scanf("%d",&user);
	
	
	float bill_ini=bill;
	
	if(user==1){
			if(bill>500){
				dis=bill*0.2;
				bill=bill-dis;
				return bill;
			}
			else{
				dis=bill*0.1;
				bill=bill-dis;
				return bill;
			}
	}else{
			if(user==2){
					if(bill>600){
						dis=bill*0.15;
						bill=bill-dis;
						return bill;
					}
					else{
						printf("no discount");
					}
			}
			else{
				printf("invalid inputs");
			}
		}
		
		
	}
	