//vehicles
//vehical
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Vehicle{
	int  chasisno;
	char name[50];
	char clr[50];
	double price;
	//color
	
	Vehicle(){
		cout<<"Default constructor of Vehicle called\n";

			this->chasisno=0;
			strcpy(this->name,"Vehicle");
			strcpy(this->clr,"Colour");
			this->price=0;
	}
	
	Vehicle(int no,char* nm,char* clr,double p){
		cout<<"Parameterised constructor of Vehicle called\n";
			this->chasisno=no;
			strcpy(this->name,nm);
			strcpy(this->clr,clr);
			this->price=p;
	}
	
	void setNo(int n){
		this->chasisno=n;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	void setClr(char* clr){
		strcpy(this->clr,clr);
	}
	void setPrice(double p){
		this->price=p;
	}
	
	int getChasis(){
		return this->chasisno;
	}
	
	char* getName(){
		return this->name;
	}
	char* getClr(){
		return this->clr;
	}
	
	double getPrice(){
		return this->price;
	}
	
	virtual void display(){
		cout<<"Chasis No:"<<this->chasisno<<"\n";
		cout<<"Name :"<<this->name<<"\n";
		cout<<"Color:"<<this->clr<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	virtual void applyBrake(){
		cout<<"Brake gets applied by vehicle\n";
	}
};

struct Bike:public Vehicle{
	int nostands;
	
	Bike(){
		cout<<"default constructor of Bike!!\n";
		this->nostands=0;
	}
	Bike(int cn,char* nm,char* clr,double p,int s):Vehicle(cn,nm,clr,p){
		cout<<"Parameterised constructor of Bike!!\n";
		this->nostands=s;
	}
	void setStand(int stand){
		this->nostands=stand;
	}
	int getStand(){
		return this->nostands;
	}
	void display(){
		Vehicle::display();
		cout<<"No of Stands:"<<this->nostands<<"\n";
	}
	void applyBrake(){
		cout<<"Drums brake appiled by the Bike\n";
	}
	
};

struct Car:public Vehicle{
	int noAc;
	Car(){
	cout<<"Default constructor of Car !!\n";
		this->noAc=0;
	}
	Car(int cn,char* nm,char* clr,double p,int ac):Vehicle(cn,nm,clr,p){
		cout<<"Parameterised constructor of Car!!\n";
		this->noAc=ac;
	}
	void setAc(int ac){
		this->noAc=ac;
	}
	int getAC(){
		return this->noAc;
	}
	void display(){
		Vehicle::display();
		cout<<"No of Ac's :"<<this->noAc<<"\n";
	}
	void applyBrake(){
		cout<<"Disc brake appiled by the car\n"<<"\n";
	}
	
};


int main(){
	Vehicle* vp;
	Bike b1(101,"HERO","Black",500,2);
	vp=&b1;
	vp->display();
	vp->applyBrake();
	
	
	Car c1(102,"TATA","White",8000,5);
	vp=&c1;
	vp->display();
	vp->applyBrake();
	
	
	return 0;
}