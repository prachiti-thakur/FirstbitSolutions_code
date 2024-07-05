//vehical
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

struct Bike:public Vehicle{
	
	Bike(){
		printf("default constructor of Bike!!\n");
		
	}
	Bike(int cn,char* nm,double p):Vehicle(cn,nm,p){
		printf("Parameterised constructor of Bike!!\n");
	}
	
	
	
};

struct Car:public Vehicle{
	Car(){
		printf("Default constructor of Car !!\n");
	}
	Car(int cn,char* nm,double p):Vehicle(cn,nm,p){
		printf("Parametrissed constructor of Car!!\n");
	}
	
};


int main(){
	Bike b1(101,"HERO",500);
	b1.display();
	
	Car c1(102,"TATA",8000);
	c1.display();
	
	
	return 0;
}