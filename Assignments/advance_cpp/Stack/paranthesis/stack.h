#include<iostream>
using namespace  std;
class Stack{
	int size;
	int top;
	char* ptr;
	
	public:
	Stack(int);
	bool isFull();
	bool isEmpty();
	bool push(char);
	bool pop(char&);
	char peek();
	int setTop(int);
	int getTop();
		
	
};