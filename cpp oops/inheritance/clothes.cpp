//clothes
#include<stdio.h>
#include<string.h>
struct Clothes{
	int id;
	char clr[50];
	char stichBy[50];
	double price;
	
	Clothes(){
		printf("Default constructor of Clothes\n");
		this->id=0;
		strcpy(this->clr,"Color");
		strcpy(this->stichBy,"Prachiti");
		this->price=0;
		
	}
	Clothes(int id,char* clr,char* stich,double p){
		printf("Parameterisd constructor of Clothes\n");
		this->id=id;
		strcpy(this->clr,clr);
		strcpy(this->stichBy,stich);
		this->price=p;
	}
	void setID(int id){
		this->id=id;
	}
	
	void setClr(char* clr){
		strcpy(this->clr,clr);
	}
	void setStichBy(char* sti){
		strcpy(this->stichBy,sti);
	}
	
	void setPrice(double p){
		this->price=p;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getClr(){
		return this->clr;
	}
	
	char* getStich(){
		return this->stichBy;
	}
	
	double getPrice(){
		return this->price;
	}
	
	void display(){
		printf("ID:%d\n",this->id);
		printf("colour:%s\n",this->clr);
		printf("Stiched By:%s\n",this->stichBy);
		printf("Price:%lf\n",this->price);
	}
};

struct Pant:public Clothes{
	double waistsize;
	double length;
	int noOFPackets;
	
	Pant(){
		printf("Default constructor of Pant!\n");

	this->waistsize=0;
	this->length=0;
	this->noOFPackets=0;
	}
	
	Pant(int id,char* clr ,char* st,double p,double ws,double l,int pockets):Clothes(id,clr,st,p){
		printf("Parameterised constructor of Pant!\n");
		this->waistsize=ws;
	this->length=l;
	this->noOFPackets=pockets;
	}
	void setWaistsize(double ws){
		this->waistsize=ws;
	}
	
	void setLength(double l){
		this->length=l;
	}
	void setNoOfPockets(int p){
		this->noOFPackets=p;
	}
	
	double getWaistSize(){
		return this->waistsize;
	}
	
	double getLength(){
		return this->length;
	}
	
	int getNoOfPockets(int p){
		return this->noOFPackets;
	}
	
	void display(){
		Clothes::display();
		printf("waistsize:%lf\n",this->waistsize);
		printf("length:%lf\n",this->length);
		printf("no of pockets:%d\n",this->noOFPackets);
	}
	
};

struct Tshirt:public Clothes{
	double lenSleeves;
	double lenShoulder;
	
	Tshirt(){
		printf("Default constructor of Tshirt !!!\n");
		this->lenSleeves=0;
		this->lenShoulder=0;
	}
	
	Tshirt(int i,char* clr,char* st,double p,double sle,double shol):Clothes(i,clr,st,p){
		printf("Parameterised constructor of Tshirt\n");
		this->lenSleeves=sle;
		this->lenShoulder=shol;
	}
	
	void setLenSle(double sle){
		this->lenSleeves=sle;
	}
	void setLenShol(double shol){
		this->lenShoulder=shol;
	}
	
	double getLenSle(){
		return this->lenSleeves;
	}
	double getLenShol(){
		return this->lenShoulder;
	}
	
	void display(){
		Clothes::display();
		printf("Length of sleeves:%lf\n",this->lenSleeves);
		printf("Length of Sholder:%lf\n",this->lenShoulder);
	}
};

int main(){
	Pant p1(101,"Pink","Prachiti",5000,32,80,2);
	p1.display();
	
	Tshirt t1(102,"black","Prachiti",1000,45,56);
	t1.display();
	return 0;
}