//definations
#include "television.h"
Television::Television(){
	this->modelNum=0;
	this->size=0;
	this->price=0;
}
Television::Television(int n,int s,double p){
	this->modelNum=n;
	this->size=s;
	this->price=p;
}
void Television::setModelNum(int n){
	this->modelNum=n;
}
void Television::setSize(int s){
	this->size=s;
}
void Television::setPrice(double p){
	this->price=p;
}

int Television::getModelNum(){
	return this->modelNum;
}
int Television::getSize(){
	return this->size;
}
double Television::getPrice(){
	return this->price;
}

void Television::store(){
	int modelnum,size;
	double price;
	cout<<"Enter the model number:";
	cin>>modelnum;
	this->modelNum=modelnum;
	cout<<"Enter the size:";
	cin>>size;
	this->size=size;
	cout<<"Enter the price:";
	cin>>price;
	this->price=price;
}

void Television::display(){
	cout<<"\nTelevison\n";
	cout<<this->modelNum<<"\n";
	cout<<this->size<<"\n";
	cout<<this->price<<"\n";
}