#include<iostream>
using namespace std;
class Acount{
	int acNum;
	double balance;
	static int count ;
	
	public:
	Acount();
	Acount(int);
	
	void setBalance(double);
	double getBalance();
	
	static int getcount();
	
	void display();
	
};