#include"node.h"
Node::Node(player p){
	this->ply=p;
	this->next=NULL;
}
void Node::setPly(player& p){
	this->ply=p;
}
void Node::setNext(Node* n){
	this->next=n;
}
player Node::getPly(){
	return this->ply;
}
Node* Node::getNext(){
	return this->next;
}