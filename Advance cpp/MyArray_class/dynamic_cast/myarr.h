//
#include <iostream>
using namespace std;
#include"emp.h"
#include"admin.h"
#include"hrh.h"
#include"salesM.h"
class MyArry{
	int size;
	int index;
	Employee** ptr;//storing the addreess of address
public:	
	MyArry(int);//only parameterised constructor bcz without size arry must not be create
	bool isFull();
	bool isEmpty();
	void addElement(Employee*);
	int searchElement(int);
	void deleteElement(int);
	void displayElements();
	
	Employee** getPtr();
	//void displayOne(int);
};
