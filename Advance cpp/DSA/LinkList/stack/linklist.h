#include"node.h"
class linklist{
	Node* start;
	public:
	linklist();
	void push(int);
	void pop();
	void peek();
	void display();
	~linklist();
};