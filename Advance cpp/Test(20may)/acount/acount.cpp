#include"account.h"

int Acount::count=0;

Acount::Acount(){
	Acount::count++;
	this->acNum=count;
	this->balance=0;
}
Acount::Acount(int b){
	Acount::count++;
	this->acNum=count;
	this->balance=b;
}

void Acount::setBalance(double b){
	this->balance=b;
}
double Acount::getBalance(){
	return this->balance;
}

int Acount::getcount(){
	return Acount::count;
}

void Acount::display(){
	cout<<"Account:\n";
	cout<<this->acNum<<"\n";
	cout<<this->balance<<"\n";
	cout<<Acount::count<<"\n";
}