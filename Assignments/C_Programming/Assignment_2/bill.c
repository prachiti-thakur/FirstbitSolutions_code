/*Accept the price from user. Ask the user if he is a student (user may say yes or 
no). If he is a student and he has purchased more than 500 than discount is 20%
otherwise discount is 10%.But if he is not a student then if he has purchased 
more than 600 discount is 15% otherwise there is not discount*/
#include<stdio.h>
void main(){
	float bill=550,dis;
	float bill_ini=bill;
	printf("\n 1.student \n 2. not a student");
	int user=1;
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
						printf("no discount");
					}
			}
			else{
				printf("invalid inputs");
			}
	}
	
	printf("\n the original bill is Rs. %f and after dis is Rs. %f",bill_ini,bill);
	
	
}