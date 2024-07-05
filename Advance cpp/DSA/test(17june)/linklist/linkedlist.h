#include"node.h"
class linkedList{
	Node* start;
	public:
	linkedList();
	void insertBySort(int);
	void display();
	Node* searchForDelete(int);
	void deleteBYdata(int);
};