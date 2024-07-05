//Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
void main(){
	float price=3500,dis;
	float price_Ini=price;
	
	if(price>=5000 && price<=7000){
		dis=price*0.2;
		price=price-dis;
	}
	else{
		if(price>=3000&&price<5000){
			dis=price*0.15;
			price=price-dis;
		}
		else{
			if(price<3000){
				dis=price*0.05;
				price=price-dis;
			}
			else{
				printf("invalid inputs");
			}
		}
	}
	
	printf("the original price is %f and after getting dis is %f ",price_Ini,price);
}