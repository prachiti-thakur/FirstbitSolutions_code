//
#include <iostream>
using namespace std;
#include"employee.h"
class MyArry{
	int size;
	int index;
	Employee* ptr;
public:	
	MyArry(int);//only parameterised constructor bcz without size arry must not be create
	bool isFull();
	bool isEmpty();
	void addElement(Employee&);
	int searchElement(int);
	void deleteElement(int);
	void displayElements();
	void displayOne(int);
	void updateElement(int);
	Employee* getPtr();
};
