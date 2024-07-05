#include"emp.h"
#ifndef hrh
#define hrh
class hr:public Employee{
	double commission;
	public:
	//hr():Employee();-->this is declaration so we cannot call the function here Employee() 
	hr();
	hr(int,char*,double,double);
	void setCommission(double);
	double getCommission();
	void display();
};
ostream& operator<<(ostream& o,hr& h);
#endif