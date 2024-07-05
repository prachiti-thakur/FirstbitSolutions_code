//Q3
#include<stdio.h>
typedef struct product{
	int id;
	char name[20];
	double price;
}product;

void display(product*,int);
void store(product*,int);

void main(){
	product p[5];
	
	store(p,5);
	display(p,5);
}
void store(product* p,int s){
	double dis;
	for(int i=0;i<s;i++){
		printf("\nEnter the value at index:%d\n",i);
		printf("Enter the id:");
		scanf("%d",&p[i].id);
		fflush(stdin);
		printf("Enter tha name");
		gets(p[i].name);
		printf("Enter the price:");
		scanf("%lf",&p[i].price);
		if(p[i].price>500){
			dis=p[i].price*0.2;
			printf("\nDiscount is %lf\n",dis);
			p[i].price=p[i].price-dis;
			printf("\nafter discount Price:RS.%lf\n",p[i].price);
		}
		else{
			dis=p[i].price*0.05;
			printf("\nDiscount is:RS. %lf\n",dis);
			p[i].price=p[i].price-dis;
			printf("\nafter discount Price:RS.%lf\n",p[i].price);
		}
	}
	printf("\n");
}

void display(product* p,int s){
	double gst,total=0;
	for(int i=0;i<s;i++){
		printf("product at index %d\n",i);
		printf("id:%d\n",p[i].id);
		printf("name:%s\n",p[i].name);
		printf("Price:%lf\n",p[i].price);
		total=total+p[i].price;
		printf("\n");
	}
	printf("Total before gst:RS.%lf\n",total);
	gst=total*0.18;
	printf("Gst:RS.%lf",gst);
	total=total-gst;
	printf("Total after gst:RS.%lf\n",total);
	
	
}