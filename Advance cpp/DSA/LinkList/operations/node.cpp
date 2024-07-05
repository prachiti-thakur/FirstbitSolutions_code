#include "node.h"

Node::Node(int data){
	this->data=data;
	this->next=NULL;
}
int Node::getData(){
	return this->data;
}
void Node::setData(int data){
	this->data=data;
}
Node* Node::getNext(){
	return this->next;
}
void Node::setNext(Node* n){
	this->next=n;
}