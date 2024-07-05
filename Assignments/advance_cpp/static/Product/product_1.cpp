#include"product.h"

double Product::discount=0.1;

Product::Product(){
	this->pid=0;
	strcpy(this->pname,"Product");
	this->price=0;
	this->quantity=0;
}
Product::Product(int i,char* nm,double p,int q){
	this->pid=i;
	strcpy(this->pname,nm);
	this->price=p;
	this->quantity=q;
}
int Product::getId(){
	return this->pid;
}
char* Product::getName(){
	return this->pname;
}
double Product::getPrice(){
	return this->price;
}
int Product::getQuantity(){
	return this->quantity;
	
}

void Product::setId(int i) {
	this->pid=i;
}
void Product::setName(char* nm){
	strcpy(this->pname,nm);
}
void Product::setPrice(double p){
	this->price=p;
}
void Product::setQuantity(int q){
	this->quantity=q;
}
Product::~Product(){
	cout<<"\ndestructor gets called!!";
}
int Product::getdiscount(){
	return Product::discount;
}
double  Product::applyDis(){
	this->price=this->price-(this->price*discount);
}
