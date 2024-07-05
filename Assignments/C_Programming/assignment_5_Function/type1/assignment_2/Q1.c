////function without parameters without returntype
//using scanf()
//Find the price of item when discount is given (specify different discount based on price)
#include<stdio.h>

//declaration
void discount();

void main(){
	//call
	discount();
	
	
	
}


//defination
void discount(){
	
	float price,dis;
	
	//take the price from user
	printf("Enter the price : ");   
	
	scanf("%f",&price);
	
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
	
	printf("the original price is RS %f and after getting dis is RS %f ",price_Ini,price);
	
}

/*
//heart func 24/7
1. impure 
2.pure
3.supply
*/