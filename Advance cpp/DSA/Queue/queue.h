#include<iostream>
using namespace std;
class Queue{
	int size;
	int front;
	int rear;
	int* ptr;
	
	public:
		Queue(int);
		bool isFull();
		bool isEmpty();
		bool push(int);
		bool pop(int&);
		void display();
		~Queue();
};