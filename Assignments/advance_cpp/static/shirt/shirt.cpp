#include"shirt.h"
double Shirt::change=0.1;
Shirt::Shirt(){
	this->sid=0;
	strcpy(this->sname,"Shirt");
	this->price=0;
	this->size='\0';
	this->type='\0';
}
Shirt::Shirt(int i,char* nm,char t,double p,char s){
	this->sid=i;
	strcpy(this->sname,nm);
	this->type=t;
	this->price=p;
	this->size=s;
}
void Shirt::setId(int s){
	this->sid=s;
}
void Shirt::setSname(char* nm){
	strcpy(this->sname,nm);
}
void Shirt::setType(char t){
	this->type=t; 
}
void Shirt::setPrice(double p){
	this->price=p;
}
void Shirt::setSize(char s){
	this->size=s;
	
}

int Shirt::getId(){
	return this->sid;
}
char* Shirt::getName(){
	return this->sname;
}
char Shirt::getType(){
	return this->type;
}
double Shirt::getPrice(){
	return this->price;
}
char Shirt::getSize(){
	return this->size;
}
 
double Shirt::Discount(){
	if(this->size=='s'||this->size=='S'){
		this->price=this->price+(this->price*change*0);
	}
	else{
		if(this->size=='m'||this->size=='M'){
			this->price=this->price+(this->price*change*1);
		}
		else{
			if(this->size=='l'||this->size=='L'){
				this->price=this->price+(this->price*change*2);
			}
			else{
				if(this->size=='x'||this->size=='X'){
					this->price=this->price+(this->price*change*3);
				}
			}
		}
	}
	
	return this->price;
}

Shirt::~Shirt()
{
	cout<<"\nDestructor gets called!!";
}