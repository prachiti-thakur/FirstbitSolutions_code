#include"Myarr.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	MyArry arr(5);
	//MyArry a1(rr); without user defined function copy constructor it will call default constructor
	arr.addElement(10);
	arr.addElement(20);
	arr.addElement(30);
	
	MyArry a2(arr);
	a2.displayElements();
	return 0;
}