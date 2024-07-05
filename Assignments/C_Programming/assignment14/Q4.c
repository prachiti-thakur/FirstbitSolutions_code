//4. Point of Sale System: Build a simple point of sale system using structures to 
//represent products with attributes like name, price, and quantity. Allow users 
//to add items to a cart and calculate the total cost.

#include<stdio.h>
#include<string.h>
typedef struct product{
	char name[20];
	double price;
	int quantity;
	
}product;

int cnt_cart=0;

void display(product*,int);
void display_cart(product*,int);
void add_cart(product*,int,product*,int);

void main(){
	
	
	product p[5];
	product cart[5];
	
	int size=5;
	
	//fill the array of product
	
	strcpy(p[0].name,"shampoo");
	p[0].price=45.3;
	p[0].quantity=5;
	
	strcpy(p[1].name,"biscuit");
	p[1].price=50.3;
	p[1].quantity=6;
	
	strcpy(p[2].name,"soap");
	p[2].price=50.3;
	p[2].quantity=6;
	
	
	strcpy(p[3].name,"book");
	p[3].price=75.5;
	p[3].quantity=10;
	
	strcpy(p[4].name,"notebook");
	p[4].price=75.5;
	p[4].quantity=10;
	
	int choice;
	
		do{
			
			
			char nam[20];
			 
			printf("\n-----------Welcome to the sales system------------------\n\n");
			
			printf("\n0.Exit\n1.Display Product\n2.Add Product\n");
			printf("Enter the choice:");
			scanf("%d",&choice);
			
			switch(choice){
							case 0:
				{
					printf("\nThank you for visit!!\n");
					break;
				}
			case 1:
				{
				
				display(p,size);
				break;
				}
			case 2:
				{
					printf("Enter name:");
					scanf("%s",nam);
							int flag=0;
								for(int i=0;i<size;i++){
									int cmp=strcmp(p[i].name,nam);
											if(cmp==0){
												//ask for the quantity if not enough then display insufficient 
												int qnt;//that much quantity must reduce from total qnt 
												printf("Enter the Quantity:\n");
												scanf("%d",&qnt);
												if(qnt<=p[i].quantity){
													add_cart(cart,i,p,qnt);
													flag=1;
												}
												else{
													printf("Insufficient Quantity!!");
												}
												
											}
											
								}
								
									if(flag==0)
										printf("product not found!!");
								
								
								display_cart(cart,size);
								
								
								break;
				}
			default:
				{
					printf("Invalid Case!!");
				}
			}//switch
			
			
		}while(choice!=0);
		
		
		
	
	
	
	
	
	
	
	
}

void display(product* p,int size){
			printf("\nSales system\n");
			printf("+---------------+--------+-----------+\n");
			printf("|      NAME     |  Price | Quantity  |\n");
			printf("+---------------+--------+-----------+\n");
		for(int i=0;i<size;i++){
		
			printf("|%15s|%-8.2lf|%-11d|\n",p[i].name,p[i].price,p[i].quantity);
			printf("+---------------+--------+-----------+\n");
		}
	}
	
void add_cart(product* cart,int i,product* pro,int qnt){
			//copy that entire element and then reduce quantity as per count
			//here we dont want to copy as it is ,we want modify some values 
			strcpy(cart[cnt_cart].name,pro[i].name);
			cart[cnt_cart].quantity=qnt;//as per quantity decide the price
			cart[cnt_cart].price=qnt* pro[i].price;//modify the price
			pro[i].quantity=pro[i].quantity-qnt;//reduce that much quantity from total quantity
			cnt_cart++;//maintain the size of cart array
			
			
		}
		
void display_cart(product* c,int size){
			double total;
			printf("\n--------------YOUR CART--------------\n");
		printf("+---------------+--------+-----------+\n");
			printf("|      NAME     |  Price | Quantity  |\n");
			printf("+---------------+--------+-----------+\n");
		for(int i=0;i<cnt_cart;i++){
		
			printf("|%15s|%-8.2lf|%-11d|\n",c[i].name,c[i].price,c[i].quantity);
			printf("+---------------+--------+-----------+\n");
		}
		for(int i=0;i<cnt_cart;i++){
			total=total+c[i].price;
		}
	printf("|  total price  -->  RS. %-8.2lf\n\n",total);
	printf("Please pay the total amount to buy the product!!\n");
}