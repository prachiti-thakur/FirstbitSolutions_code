#include<iostream>
using namespace std;
class Stack{
	int size;
	int top;
	char* ptr;
	public:
	int getTop();
	Stack(int);
	bool isFull();
	bool isEmpty();
	bool push(char);
	bool pop(char&);
};