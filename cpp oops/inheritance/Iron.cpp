//Iron
#include<stdio.h>
#include<string.h>
struct Iron{
	int id;
	char Cname[40];
	double price;
	
	Iron()
	{
		printf("Default constructor of Iron\n");
		this->id=0;
		strcpy(this->Cname,"Iron");
		this->price=0;
	}
	
	Iron(int i,char* nm,double p)
	{
		printf("Parameterised constructor of Iron\n");
		this->id=i;
		strcpy(this->Cname,nm);
		this->price=p;
	}
	
	void setId(int i){
		this->id=i;
	}
	void setCname(char* nm){
		strcpy(this->Cname,nm);
	}
	void setPrice(double p){
		this->price=p;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getCname(){
		return this->Cname;
	}
	
	double getPrice(){
		return this->price;
	}
	
	void display(){
		printf("Id:%d\n",this->id);
		printf("Company Name:%s\n",this->Cname);
		printf("Price:%lf\n",this->price);
	}
	
};
struct Normaliron:public Iron{
	Normaliron():Iron(){
		printf("Default constructor of Normal Iron\n");
	}
	Normaliron(int i,char* nm,double p):Iron(i,nm,p){
		printf("parameterised constructor of Normal iron\n");
	}
};

struct steamIron:public Iron{
	double CapacityOfTank;//litre
	
	steamIron(){
		printf("Default constructor of steam Iron \n");
		this->CapacityOfTank=60;
	}
	
	steamIron(int i,char* Cnm,double p,double cT):Iron(i,Cnm,p){
		printf("Parameterised constructor of steam Iron \n");
		this->CapacityOfTank=cT;
	}
	void setCapacityOfTank(double c){
		this->CapacityOfTank=c;
	}
	
	double getCapacityOfTank(){
		return this->CapacityOfTank;
	}
	void display(){
		Iron::display();
		printf("Capaity of Tank:%lf\n",this->CapacityOfTank);
	}
	
};
int main(){
	Iron i;
	Normaliron n1(101,"nison",900);
	n1.display();
	steamIron s1(102,"abio",800,20);
	s1.display();
	return 0;
}