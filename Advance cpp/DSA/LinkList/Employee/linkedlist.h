#include"node.h"
class LinkedList{
	Node* start;
	public:
	LinkedList();
	void insertBeg(Employee&);
	void insertEnd(Employee&);
	void insertPos(Employee&,int);
	void deleteBeg();
	void deleteEnd();
	void deleteByPos(int);
	int searchNode(int);
	void deleteByData(int);
	void display();
	~LinkedList();
};