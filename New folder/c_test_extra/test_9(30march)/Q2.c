//Q2
#include<stdio.h>
typedef struct  person{
	int age;
	double ticket_am;
}per;

void total_am(per*,int);
void display(per*,int);
void store(per*,int);

void main(){
	per p[5];
	store(p,5);
	display(p,5);
	total_am(p,5);
}
void store(per* p,int n){
	for(int i=0;i<n;i++){
		printf("Index %d:\n",i);
		printf("Enter the age:");
		scanf("%d",&p[i].age);
		printf("Enter the ticket_am:");
		scanf("%lf",&p[i].ticket_am);
		printf("\n");
	}
	
}

void display(per* p,int n){
	for(int i=0;i<n;i++){
		printf("Index:%d\n",i);
		printf("Age:%d\n",p[i].age);
		printf("Ticket_am:%lf\n",p[i].ticket_am);
		printf("\n\n");
	}
}

void total_am(per* p,int n){
	int dis=0;
	double total=0,price;
	for(int i=0;i<n;i++){
		
				if(p[i].age<12){
					dis=p[i].ticket_am*0.3;
					price=p[i].ticket_am-dis;
					total=total+price;
				}else{
					if(p[i].age>59){
						dis=p[i].ticket_am*0.5;
						price=p[i].ticket_am-dis;
						total=total+price;
					}else{
						total=p[i].ticket_am;
					}
				}
				
	}//end for
	
	printf("Total:%lf",total);
}