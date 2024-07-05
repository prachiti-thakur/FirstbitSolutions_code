#include<iostream>
using namespace std;
class Television{
	int modelNum;
	int size;
	double price;
	
	public:
	Television();
	Television(int,int,double);
	void setModelNum(int);
	void setSize(int);
	void setPrice(double);
	
	int getModelNum();
	int getSize();
	double getPrice();
	
	void store();
	
	void display();
};