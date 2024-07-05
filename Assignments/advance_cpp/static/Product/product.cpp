#include<iostream>
using namespace std;
class Product{
	int pid;
	char pname[20];
	double price;
	int quantity;
	
	public:
		Product();
		Product(int,char*,double,int);
		int getId();
		char* getName();
		double getPrice();
		int getQuantity();
		
		void setId(int);
		void setName(char*);
		void setPrice(double);
		void setQuantity(int);
		~Product();
		
};