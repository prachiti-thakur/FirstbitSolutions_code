#include"player.h"
template<class T>
class Node{
	T ply;
	Node* next;
	public:
	Node(T);
	void setPly(T&);
	void setNext(Node*);
	T& getPly();
	Node* getNext();
		
	
};