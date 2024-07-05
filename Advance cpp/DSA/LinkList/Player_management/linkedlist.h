#include"node.h"
class LinkedList{
	Node* start;
	public:
	LinkedList();
	void insertBeg(player&);
	void insertEnd(player&);
	void insertAtPos(player&,int);
	void deleteBeg();
	void deleteEnd();
	void deleteAtPos();
	int searchNode(int);
	void deleteByData(int);
	void display();
	~LinkedList();
};