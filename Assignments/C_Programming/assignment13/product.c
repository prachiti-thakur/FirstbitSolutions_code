//Product (id, name, quantity, price)
#include<stdio.h>
struct product {
	int id;
	char name[20];
	int quantity;
	double price;
};
void main(){
	struct product p;
	
	p.id=1;
	strcpy(p.name,"prahiti");
	p.quantity=4;
	p.price=4556;
	
	printf("id:%d\n\n",p.id);
	printf("name:%s\n\n",p.name);
	printf("quantity:%d\n",p.quantity);
	printf("price:%d\n\n",p.price);
	
	//array
	struct product p1[10];
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	
	printf("Enter the values:\n");
		for(int i=0;i<n;i++){
			printf("id:");
			scanf("%d",&p1[i].id);
			
			fflush(stdin);
			printf("name:");
			scanf("%s",&p1[i].name);
			
			printf("quantity:");
			scanf("%d",&p1[i].quantity);
			
			printf("price:");
			scanf("%lf",&p1[i].price);
			
			printf("\n\n");
		}
		
		//
		printf("products:\n\n");
		
		for(int i=0;i<n;i++){
			printf("id:%d\n",p1[i].id);
			printf("name:%s\n",p1[i].name);
			printf("quantity:%d\n",p1[i].quantity);
			printf("price:%lf\n",p1[i].price);
			printf("\n\n");
			
		}
		

}