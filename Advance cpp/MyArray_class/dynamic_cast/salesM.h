#pragma once
#include "emp.h"
//#ifndef SalesM
//#define SalesM
class SalesM :public Employee{
	double incentive;
	int target;
	public:
		
	SalesM();
	SalesM(int,char*,double,double,int);
	double getIncentive();
	void setIncentive(double);
	void setTarget(int);
	int getTarget();
	void display();
};
ostream& operator<<(ostream& o,SalesM& h);
//#endif