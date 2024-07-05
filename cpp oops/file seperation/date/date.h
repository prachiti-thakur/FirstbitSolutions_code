#include<iostream>
using namespace std;
struct Date{
	int day;
	int mon;
	int year;
	
	//setter
	void setday(int);
	void setmon(int);
	void setyear(int);
	
	void display();
		//getters
	int getDay();
	
	int getMon();
	int getyear();
	
	//constructor
	Date();
		
	//parameterised constructor
	Date(int,int,int);
		
};