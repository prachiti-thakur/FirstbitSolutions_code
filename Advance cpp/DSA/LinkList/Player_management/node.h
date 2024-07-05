#include"player.h"
class Node{
	player ply;
	Node* next;
	public:
	Node(player);
	void setPly(player&);
	void setNext(Node*);
	player getPly();
	Node* getNext();
		
	
}