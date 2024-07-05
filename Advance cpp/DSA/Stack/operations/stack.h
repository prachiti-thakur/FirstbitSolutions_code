#include<iostream>
using namespace std;
class Stack{
	int size;
	int top;
	int* sptr;
	public:
	Stack(int);
	bool isFull();
	bool isEmpty();
	bool push(int);
	bool pop(int&);
	int peek();
	void display();
	
};