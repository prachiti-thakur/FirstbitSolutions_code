//ticket
//initially ticket price 100 so we are cretaing ticket object with price-->100
#include<stdio.h>

struct Children{
	int age;
	char gender;
	double ticketP;
	
	Children(){
		printf("\nDefalut constructor called!!\n");
		this->age=0;
		this->gender='N';
		this->ticketP=100;
	}
	
	Children(int a,char g){
		printf("\nparameterised constructor called!!\n");
		this->age =a;
		this->gender=g;
		this->ticketP=0;
	}
	
	void setAge(int a){
		this->age=a;
	}
	
	void setGender(char g){
		this->gender=g;
	}
	
	void setTicketP(double t){
		this->ticketP=t;
	}
	
	int getAge(){
		return this->age;
	}
	
	char getGender(){
		return this->gender;
	}
	
	double getTicketP(){
		return this->ticketP;
	}
	
	void display(){
		printf("children info:\n");
		printf("Age:%d gender:%c Ticketprice:%lf\n",this->age,this->gender,this->ticketP);
	}
};

struct Women{
	int age;
	double ticketP;
	
	Women(){
		printf("\nDeflaut constructor called!!\n");
		
		this->age=0;
		this->ticketP=0;
	}
	
	Women(int a){
		printf("\nParameterised constructor called!!\n");
		this->age=a;
		this->ticketP=100;
	}
	
	void setAge(int a){
		this->age=a;
		
	}
	
	void setTicketP(double d){
		this->ticketP=d;
	}
	
	int getAge()
	{		
		return this->age;
	}	
	
	double getTicketP(){
		return this->ticketP;
	}
	
	void display(){
		printf("Women's info\n");
		printf("Age:%d TicketPrice:%lf\n",this->age,this->ticketP);
	}
};

struct Men{
	int age;
	double ticketP;
	
	Men(){
		printf("\nDefalut constructor called!!\n");
		this->age=0;
		this->ticketP=0;
	}
	
	Men(int a){
			printf("\nParameterised constructor called\n");
			this->age=a;
			this->ticketP=100;
	}
	
	void setAge(int a){
		this->age=a;
	}
	
	void setTicketP(double t){
		this->ticketP=t;
	}
	
	int getAge(){
		return this->age;
	}
	
	double getTicketp(){
		return this->ticketP;
	}
	
	void display(){
		printf("Men's info\n");
		printf("Age:%d ticketPrice:%lf\n",this->age,this->ticketP);
		
	}
	
};

struct JeshthaN{
	int age;
	char gender;
	double ticketP;
	
	JeshthaN(){
		printf("\nDefalut constructor called\n");
		this->age=0;
		this->gender='N';
		this->ticketP=0;
	}
	
	JeshthaN(int a,char g){
		printf("\nParameterised constructor called!!\n");
		this->age=a;
		this->gender=g;
		this->ticketP=100;
	}
	
	void setAge(int a){
		this->age=a;
	}
	
	void setGender(char g){
		this->gender=g;
	}
	
	void setTicketp(double t){
		this->ticketP=t;
	}
	
	int getAge(){
		return this->age;
	}
	
	char getGender(){
		return this->gender;
	}
	
	double getTicketP(){
		return this->ticketP;
	}
	
	void display(){
		printf("Jeshtha Najarik`s info:\n");
		printf("Age:%d Gender:%c ticketprice:%lf",this->age,this->gender,this->ticketP);
	}
};

struct Ticket{
	double price;
	double dis;
	
	Ticket(){
		printf("\nDefalut constructo called!!\n");
		this->price=0;
		this->dis=0;
	}
	
	Ticket(double p){
		printf("\nparameterised constructor called\n");
		this->price=p;
		this->dis=0;//dis initially zero
		
	}
	
	void setPrice(double p){
		this->price=p;
		
	}
	
	void setDis(double d){
		this->dis=d;
	}
	
	double getPrice(){
		return this->price;
	}
	double getDis(){
		return this->dis;
	}
	
	void display(){
		printf("\nTickets info\n");
		printf("\nticketPrice:%lf Discount :%lf",this->price,this->dis);
	}
	
	//to calculate ticket price
	double togetTicket(Children c){
		this->dis=this->price*0.7;
		this->price=this->price-this->dis;
		return this->price;
		
	}
	
	double togetTicket(Women w){
		this->dis=this->price*0.5;
		this->price=this->price-this->dis;
		return this->price;
	}
	
	double togetTicket(Men m){
		this->dis=0;
		return this->price;
	}
	
	double togetTicket(JeshthaN j){
		
		this->dis=this->price*0.9;
		this->price=this->price-this->dis;
		return this->price;
	}
};

int main(){
	
	int age;
	char gender;
	double TicketPrice;
	
	do{
		printf("\nEnter the age:");
		scanf("%d",&age);
		
		
		fflush(stdin);
		printf("Enter the gender \n1.Male-->'M'\n2.Female-->'F'\n");
		scanf("%c",&gender);
		
		Ticket t(100);
		t.display();
		
		if(age<18){
			
			Children c(age,gender);
			c.display();
			
			TicketPrice=t.togetTicket(c);
			c.setTicketP(TicketPrice);
			printf("\nAfter getting Discount:\n");
			printf("\nticketPrice:%lf discount:%lf\n",c.getTicketP(),t.getDis());
			
			
		}
		else{
			if(gender=='F'|| gender=='f'){
				
				if(age<60){
					//women
					Women w(age);
					w.display();
					TicketPrice=t.togetTicket(w);
					w.setTicketP(TicketPrice);
					printf("\nafter getting discount!!\n");
					printf("\nTicketPrice:%lf discount:%lf\n",w.getTicketP(),t.getDis());
							
				}
				else{
					//jeshtha nagrik women
					JeshthaN j(age,gender);
					j.display();
					TicketPrice=t.togetTicket(j);
					j.setTicketp(TicketPrice);
					printf("\nafter getting discount!!\n");
					printf("TicketPrice%lf disount :%lf\n",j.getTicketP(),t.getDis());
					
				}
			}
			else{
				if(gender=='M' || gender=='m'){
					
					if(age<60){
						//men
						Men m(age);
						m.display();
						
						TicketPrice=t.togetTicket(m);
						m.setTicketP(TicketPrice);
						printf("\nafter getting discount!!\n");
						printf("Ticketprice:%lf Discount :%lf\n",m.getTicketp(),t.getDis());
						
					}else{
						//jeshths nagarik men
						JeshthaN j(age,gender);
						j.display();
						TicketPrice=t.togetTicket(j);
						j.setTicketp(TicketPrice);
						printf("\nafter getting discount!!\n");
						printf("TicketPrice%lf disount :%lf\n",j.getTicketP(),t.getDis());
					}
				}else{
					printf("\nPlease enter valid gender!!\n");
				}
			}
		}
		
		
		
		
	}while(1);
	return 0;
}