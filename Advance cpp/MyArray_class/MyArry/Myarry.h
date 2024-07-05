//
#include <iostream>
using namespace std;

class MyArry{
	int size;
	int index;
	int* ptr;
public:	
	MyArry(int);//only parameterised constructor bcz without size arry must not be create
	bool isFull();
	bool isEmpty();
	void addElement(int);
	int searchElement(int);
	void deleteElement(int);
	void displayElements();
};