#include"node.h"
class LinkList{
	Node* start;
	public:
	LinkList();
	void insertBeg(int);
	void insertEnd(int);
	void insertAtPos(int,int);
	void deleteBeg();
	void deleteEnd();
	void deleteAtPos(int);
	void deleteBydata(int);
	int searchNode(int);
	void display();
	~LinkList();
	void listReverse(Node*);
//	Node* getstart();
 	void reverse();
};