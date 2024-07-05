//q1 wap to calculate selling price on based on cost price and discount
#include<stdio.h>
void main(){
	float s_p,discount=0;
	float cost_price=5000;
	if(cost_price>=5000 && cost_price<=7000){
		discount=cost_price*0.02;
		s_p=cost_price-discount;
		
	}
	else if(cost_price>=7000&&cost_price<=10000){
		discount=cost_price*0.03;
		s_p=cost_price-discount;
	}else{
		s_p=cost_price;
	}
	
	printf("selling_price:%f",s_p);
}