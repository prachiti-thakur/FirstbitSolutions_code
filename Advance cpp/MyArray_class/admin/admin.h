//
#include"emp.h"
#include<iostream>
#ifndef admin
#define admin
using namespace std;
class Admin:public Employee{
	double allowance;
	public:
	Admin();
	Admin(int,char*,double,double);
	void setAllowance(double a);
	double getAllowance();
	void display();	
};
#endif