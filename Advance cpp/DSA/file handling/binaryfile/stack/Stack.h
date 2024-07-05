#include<iostream>
using namespace std;
template <class T>
class Stack{
	
	int top;
	T* ptr;
	
	public:
	Stack();//we cannot give size to the original stack
	void push(T);
	void pop();
	T topS();
	void display();
	~Stack();
};