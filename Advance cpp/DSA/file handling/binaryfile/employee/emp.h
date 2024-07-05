#include<iostream>
using namespace std;
class Emp{
	int eid;
	char name[20];
	double salary;
	public:
	Emp();
	Emp(int,char*,double);
	void setid(int);
	void setname(char*);
	void setSalary(double);
	int getid();
	char* getName();
	double getDouble();
	void display();
	
};