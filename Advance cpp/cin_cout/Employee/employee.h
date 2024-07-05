#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[10];
	double price;
	public:
		Employee();
		Employee(int ,char*,double );
		
		void setid(int );
		void setname(char*);
		void setprice(double );
		
		int getid();
		char* getname();
		double getprice();
		
};

ostream& operator<<(ostream&,Employee&);
istream& operator>>(istream&,Employee&);