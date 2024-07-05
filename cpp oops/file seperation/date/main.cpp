#include <iostream>
#include"date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Date d1;
	cout<<"d1\n";
	d1.display();
	Date d2(20,6,2024);
	d2.display();
	d1.setday(10);
	d1.setmon(2);
	d1.setyear(2024);
	cout<<"d1\n";
	cout<<d1.getDay()<<"\n";
	cout<<d1.getMon()<<"\n";
	cout<<d1.getyear()<<"\n";
	return 0;
}