#include<iostream>
using namespace std;
#include"Book.h"
//define static variable
int Book::count=0;
Book::Book()
{
	count++;
	this->bid=0;
	strcpy(this->bname,"Book");
	this->price=0;
	strcpy(this->authour,"XYZ");
	}
Book::Book(int i,char* nm,double p, char* ath){
	count++;
	this->bid=0;
	strcpy(this->bname,nm);
	this->price=0;
	strcpy(this->authour,ath);
}
void Book::setbid(int i){
	this->bid=i;
}
void Book::setname(char* nm)
{
	strcpy(this->bname,nm);
}
void Book::setprice(double p){
	this->price=p;
}
void Book::setauthour(char* ath){
	strcpy(this->authour,ath);
}

int Book::getbid(){
	return this->bid;
}
char* Book::getbname(){
	return this->bname;
}
double Book::getprice(){
	return this->price;
}
char* Book::getauthour(){
	return this->authour;
}

//for static members
 int Book::getcount(){
	return Book :: count;
}
