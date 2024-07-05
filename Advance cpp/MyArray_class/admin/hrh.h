#include"emp.h"
#ifndef hrh
#define hrh
class hr:public Employee{
	double commission;
	public:
	hr();
	hr(int,char*,double,double);
	void setCommission(double);
	double getCommission();
	void display();
};
#endif