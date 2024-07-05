#include"node.h"
class linklist{
	Node* start;
	public:
	linklist();
	void enqueue(int);
	void dequeue();
	void display();
	~linklist();
};