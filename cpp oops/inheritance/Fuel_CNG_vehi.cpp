#include<stdio.h>
#include<string.h>
struct Vehicle{
	int  chasisno;
	char name[50];
	double price;
	//color
	
	Vehicle(){
		printf("Default constructor of Vehicle called\n");

			this->chasisno=0;
			strcpy(this->name,"Vehicle");
			this->price=0;
	}
	
	Vehicle(int no,char* nm,double p){
		printf("Parameterised constructor of Vehicle called\n");
			this->chasisno=no;
			strcpy(this->name,nm);
			this->price=p;
	}
	
	void setNo(int n){
		this->chasisno=n;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
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
	
	double getPrice(){
		return this->price;
	}
	
	void display(){
		printf("Chasis No:%d\n",this->chasisno);
		printf("Name :%s\n",this->name);
		printf("Price:%lf\n",this->price);
	}
};

struct ElectricVehicle:public Vehicle{
	
	double capBattery;
	void setBattery(double CB){
		this->
	}
	ElectricVehicle(){
		printf("Default constructor of ElectricVehicle:\n");
	}
};