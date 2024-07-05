//phone
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct phone 
{
	int id;
	char CName[40];
	double price;
	
	phone(){
	cout<<"Default constructor of phone\n";
		this->id=0;
		strcpy(this->CName,"vivo");
		this->price=0;
		
	}
		phone(int i,char* cn,double p){
	cout<<"Parameterised constructor of phone\n";
		this->id=i;
		strcpy(this->CName,cn);
		this->price=p;
		
	}
	
	void setId(int id){
		this->id=id;
	}
	void setCname(char* cn){
		strcpy(this->CName,cn);
	}
	void setPrice(double p){
		this->price=p;
	}
	
	int getId()
		{
			return this->id;
		}
		
	char* getCname(){
		return this->CName;
	}
	
	double getPrice(){
		return this->price;
	}
	virtual void display(){
	cout<<"ID:"<<this->id<<"\n";
		cout<<"Company Name:"<<this->CName<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	virtual void toCall(){
		cout<<"phone is calling\n";
	}
};

struct Landline:public phone{
	int noKeys;
	Landline(){
		cout<<"Default constructor of landline \n";
		this->noKeys=0;
	}
	Landline(int i,char* cn,double p,int k):phone(i,cn,p){
		cout<<"Parameterised constructor of landline \n";
		this->noKeys=k;
	}
	void setKeys(int k){
		this->noKeys=k;
	}
	int getKeys(){
		return this->noKeys;
	}
	void display(){
		phone::display();
		cout<<"no of keys:"<<this->noKeys<<"\n";
	}
	void tocall(){
		cout<<"Landline is calling\n";
	}
};
struct smartphone:public phone{
	int noSim;
	smartphone(){
		cout<<"Default constructor of smartphone \n";
		this->noSim=0;
	}
	smartphone(int i,char* cn,double p,int s):phone(i,cn,p){
		cout<<"Parameterised constructor of smartphone \n";
		this->noSim=s;
	}
	void setnoSim(int s){
		this->noSim=s;
	}
	int getnosim(){
		return this->noSim;
	}
	void display(){
		phone::display();
		cout<<"No of sim:"<<this->noSim<<"\n";
		
	}
	void tocall(){
		cout<<"smartphone is calling\n";
	}
};
int main(){
	phone* p;
	Landline l1(101,"vivo",80000,45);
	p=&l1;
	p->display();
	p->toCall();
	
	smartphone s1(102,"samsung",70000,2);
	p=&s1;
	p->display();
	p->toCall();
	return 0;
}