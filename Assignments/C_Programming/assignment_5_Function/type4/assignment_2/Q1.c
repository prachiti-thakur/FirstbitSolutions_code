

//using scanf()
//Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>

//declaration
float discount(float);

void main(){
	float price,p;
	//take the price from user
	printf("Enter the price : ");   
	
	scanf("%f",&price);
	//call
	p=discount(price);
		printf(" dis is RS %f ",p);
	
	
	
	
}


//defination
float discount(float price){
	
	float dis;
	
	
	
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

		}
	}
	
	return price;
}

/*
//heart func 24/7
1. impure 
2.pure
3.supply
*/