//lock
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Lock{
	int id;
	char Cname[40];
	char shape[40];
	double price;
	Lock(){
		cout<<"Default  constructor of Lock!!\n";
		this->id=0;
		strcpy(this->Cname,"Cname");
		strcpy(this->shape,"circle");
		this->price=0;
	}
		Lock(int i,char* cn,char* sp,double p){
			cout<<"parameterised constructor of Lock!!\n";
		this->id=i;
		strcpy(this->Cname,cn);
		strcpy(this->shape,sp);
		this->price=p;
	}
	void setId(int i){
		this->id=i;
	}
	void setCname(char* cn){
		strcpy(this->Cname,cn);
	}
	void setShape(char* sp){
		strcpy(this->shape,sp);
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
	char* getShape(){
		return this->shape;
	}
	double getPrice(){
		return this->price;
	}
	virtual void display(){
			cout<<"Id:"<<this->id<<"\n";
			cout<<"Companyname:"<<this->Cname<<"\n";
			cout<<"Shape:"<<this->shape<<"\n";
			cout<<"Price:"<<this->price<<"\n";
	}
	virtual void tolock(){
			cout<<"Lock get locked!!\n";
	}
	
	
	};


struct DiscLock:public Lock{
	int noOfDisc;
	DiscLock(){
			cout<<"Default constructor of Disclock !!\n";
		this->noOfDisc=0;
		
	}
		DiscLock(int id ,char* cn,char* sp,double p,int d):Lock(id,cn,sp,p){
			cout<<"Parameterised constructor of Disclock !!\n";
		this->noOfDisc=d;
		
	}
	void setDisc(int disc){
		this->noOfDisc=disc;
	}
	double getDisc(){
		return this->noOfDisc;
	}
	void display(){
		Lock::display();
			cout<<"No of disc "<<this->noOfDisc<<"\n";
	}
	 void tolock(){
			cout<<"DiscLock get locked!!\n";
	}
	
	
};
struct Knob:public Lock{
	char materialKnob[40];
	Knob(){
		printf("Default constructor of Disclock !!\n");
		strcpy(this->materialKnob,"steel");
	}
	
	Knob(int id ,char* cn,char* sp,double p,char* mk):Lock(id,cn,sp,p){
			cout<<"Default constructor of Disclock !!\n";
		strcpy(this->materialKnob,mk);
	}
	void setMknob(char* mk){
		strcpy(this->materialKnob,mk);
	}
	
	char* getMknob(){
		return this->materialKnob;
	}
		void display(){
		Lock::display();
			cout<<"Material of knob :"<<this->materialKnob<<"\n";
	}
	 void tolock(){
			cout<<"knobLock get locked!!\n";
	}
	
};
int main(){
	Lock* lp;
	DiscLock d1(101,"Abc","circle",900,8);
	lp=&d1;
	lp->display();
	lp->tolock();
	
	Knob k1(102,"xyz","square",500,"steel");
	lp=&k1;
	lp->display();
	lp->tolock();
	return 0;
}