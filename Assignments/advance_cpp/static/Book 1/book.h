#include<iostream>
using namespace std;
class Book{
	int bid;
	char bname[20];
	double price;
	char authour[20];
	static int count;

	
	public:
		Book();
		Book(int ,char*,double, char*);
		void setbid(int);
		void setname(char*);
		void setprice(double);
		void setauthour(char*);
		
		int getbid();
		char* getbname();
		double getprice();
		char* getauthour();
		
		//for static members
		static int getcount();
			
};