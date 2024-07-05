#include<iostream>
using namespace std;
class Shirt{
	int sid;
	char sname[20];
	char type;//f->formal c->casual
	double price;
	char size;//s->small,m->medium,l->large ,xl->extra large
	static double change;
	public:
	Shirt();
	Shirt(int,char*,char,double,char);
	void setId(int);
	void setSname(char*);
	void setType(char);
	void setPrice(double);
	void setSize(char);
	
	int getId();
	char* getName();
	char getType();
	double getPrice();
	char getSize();
	 
	double Discount();
	~Shirt();
	
	
};