//using scanf()
//Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>
float discount();
void main(){
	
	float price=discount();
	if(price!= -1){
		printf("Discount is %f",price);
	}
	else{
		printf("Invalid Inputs");
	}
}
float discount(){
	float price,dis;
	
	//take the price from user
	printf("Enter the price : ");
	scanf("%f",&price);
	
	if(price>=5000 && price<=7000){
		dis=price*0.2;
		price=price-dis;
	}
	else{
		if(price>=3000&&price<5000){
			dis=price*0.15;
			price=price-dis;
			return price;
		}
		else{
			if(price<3000){
				dis=price*0.05;
				price=price-dis;
				return price;
			}
			else{
				return -1;
			}
		}
	}
	
}