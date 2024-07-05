//definations
#include<iostream>
using namespace std;
#include"date.h"
	void Date::setday(int d){
		this->day=d;
	}
	
	void Date::setmon(int m){
		this->mon=m;
	}
	void Date::setyear(int y){
		this->year=y;
	}
	
	void Date::display(){
		cout<<this->day<<"-"<<this->mon<<"-"<<this->year<<"\n";
		}
		//getters
	int Date::getDay(){
		return this->day;
	}
	
	int Date::getMon(){
		return this->mon;
	}
	
	int Date::getyear(){
		return this->year;
	}
	
	//constructor
	Date::Date(){
		this->day=0;
		this->mon=0;
		this->year=0;
		cout<<"Constructor called\n";//POC
	}
	
	//parameterised constructor
	Date::Date(int d,int m,int y){
		this->day=d;
		this->mon=m;
		this->year=y;
		cout<<"Parameterised constructor called\n";
	}