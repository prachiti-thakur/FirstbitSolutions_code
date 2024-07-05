//mirrror
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Mirror{
	int id;
	char shape[20];
	char Cname[20];
	double price;
	Mirror(){
		cout<<"Default constructor of Mirror!1\n";
		this->id=0;
		strcpy(this->shape,"Circle");
		strcpy(this->Cname,"Abc");
		this->price=0;
	}
		Mirror(int i,char* sp,char* cn,double d){
		cout<<"Parameterised constructor of Mirror!1\n";
		this->id=i;
		strcpy(this->shape,sp);
		strcpy(this->Cname,cn);
		this->price=d;
	}
	
	void setId(int i){
		this->id=i;
	}
	void setShape(char* sp){
		strcpy(this->shape,sp);
	}
	void setName(char* cn){
		strcpy(this->Cname,cn);
	}
	void setPrice(double d){
		this->price=d;
	}
	int getId(){
		return this->id;
	}
	char* getShape(){
		return this->shape;
	}
	char* getCname(){
		return this->Cname;
	}
	double getPrice(){
		return this->price;
	}
	virtual void display(){
		cout<<"ID:"<<this->id<<"\n";
		cout<<"Shape:"<<this->shape<<"\n";
		cout<<"Company Name:"<<this->Cname<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	virtual void toshow(){
		cout<<"Mirror!!\n";
	}
};

struct Convex:public Mirror{
	Convex(){
		cout<<"default constructor of Convex Mirror!!n";
	
	}
		Convex(int i,char* sp,char* cn,double d):Mirror(i,sp,cn,d){
		cout<<"Parameterised constructor of  Convex Mirror!!\n";
		
	}
	void display(){
		Mirror::display();
	}
	virtual void toshow(){
		cout<<"Convex Mirror!!\n";
	}
	
};
struct Concave:public Mirror{
	Concave(){
		cout<<"default constructor of Concave Mirror!!n";
	
	}
		Concave(int i,char* sp,char* cn,double d):Mirror(i,sp,cn,d){
		cout<<"Parameterised constructor of  Concave Mirror!!\n";
		
	}
	void display(){
		Mirror::display();
	}
	virtual void toshow(){
	cout<<"Concave Mirror!!\n";
	}
	
};

int main(){
	Mirror* mp;
	Convex c1(101,"circle","Abc",5000);
	mp=&c1;
	mp->display();
	mp->toshow();
	 Concave c2(101,"circle","Abc",5000);
	 mp=&c2;
	 mp->display();
	 mp->toshow();
	return 0;
}