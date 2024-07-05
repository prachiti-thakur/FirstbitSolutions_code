#include <iostream>
#include"date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<iostream>
using namespace std;
int main() {
	Date d1;
	cout<<"d1:";
	d1.display();
	Date d2(20,6,2024);
	d2.display();
	d1.setday(10);
	d1.setmon(2);
	d1.setyear(2024);
	//d1.display();
	cout<<"After setting values of d1 from setters:\n";
	cout<<"print by using getters:\n";
	cout<<d1.getDay()<<"-"<<d1.getMon()<<"-"<<d1.getyear()<<"\n";
	return 0;
}