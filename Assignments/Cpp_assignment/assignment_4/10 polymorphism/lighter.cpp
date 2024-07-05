//lighter
#include<stdio.h>
#include<string.h>

#include<iostream>
using namespace std;
struct Lighter{
	int id;
	char Cname[50];
	double price;
	
	Lighter(){
		cout<<"Default constructor of Lighter called\n";
		this->id=0;
		strcpy(this->Cname,"Lighter");
		this->price=0;
	}
	Lighter(int i,char* cnm,double p){
		cout<<"Parameterised constructor of Lighter called\n";
		this->id=i;
		strcpy(this->Cname,cnm);
		this->price=p;
	}
	
		void setId(int id){
		this->id=id;
	}
	void setCname(char* nm){
		strcpy(this->Cname,nm);
	}
	void setPrice(double p){
		this->price=p;
	}
	
	int getID(){
		return this->id;
	}
	char* getName(){
		return this->Cname;
	}
	
	double getPrice(){
		return this->price;
	}
	
	virtual void display(){
		cout<<"\nModelId:"<<this->id<<"\n";
		cout<<"Company Name:"<<this->Cname<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	
	virtual void toignit(){
		cout<<"Lighter is ignit\n";
	}
	
};
struct FlameL:public Lighter{
	//double TankC;//use to store the compressed liquid
	double CompLiquid;//volume
	
	FlameL(){
		cout<<"Default constructor of FlameL\n";
		this->CompLiquid=0;
	}
	FlameL(int i,char* cnm,double p,double cl):Lighter(i,cnm,p){
		cout<<"Parameterised Constructor of FlameL\n";
		this->CompLiquid=cl;
	}
	void setCompLiquid(double Cl){
		this->CompLiquid=Cl;
	}
	
	double getCompLiquid(){
		return this->CompLiquid;
	}
	
	void display(){
		//
		Lighter::display();
		cout<<"Compressed liquid Quantity:"<<this->CompLiquid<<"\n";
		
	}
	 void toignit(){
		printf("Flame Lighter is ignit\n");
	}
};//flameL ends here

struct EletricL:public Lighter{
	double Battery;
	
	EletricL(){
		cout<<"Default constructor of EletricL\n";
		this->Battery=0;
	}
	
		EletricL(int i,char* cnm,double p,double b):Lighter(i,cnm,p){
		cout<<"Parameterised  constructor of EletricL\n";
		this->Battery=b;
	}
	
	void SetBattery(double b){
		this->Battery=b;
	}
	
	double getBattery(){
		return this->Battery;
	}
	
	void display(){
		Lighter::display();
		cout<<"Battery:"<<this->Battery<<"\n";
	}
	 void toignit(){
		cout<<"electric Lighter is ignit\n";
	}
};//electric lighter ends here
int main_1(){
	Lighter l;
	Lighter l2(102,"Prachiti",500);
	l2.display();
	
	FlameL f1;
	FlameL f2(105,"Flame",450,30);
	f2.display();
	
	EletricL e1;
	EletricL e2(106,"hrutu",800,600);
	e2.display();
	
	return 0;
}

int main(){
	Lighter* l;
	FlameL f2(105,"Flame",450,30);
	l=&f2;
	l->display();
	l->toignit();
	EletricL e2(106,"hrutu",800,600);
	l=&e2;
	l->display();
	l->toignit();
	return 0;
}