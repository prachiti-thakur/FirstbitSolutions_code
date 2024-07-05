//
#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[20];
	double salary;
	public:
		Employee();
	Employee(int,char*,double);
	void setid(int);
	void setname(char*);
	void setsalary(double);
	
	int getid();
	char* getname();
	double getsalary();
	
	void display();
	//int operator==(Employee);
};
ostream& operator<<(ostream&,Employee&);