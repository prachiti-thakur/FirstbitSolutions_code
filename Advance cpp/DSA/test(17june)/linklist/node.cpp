#include"node.h"

Node::Node(int data){
	this->data=data;
	this->next=NULL;
}
void Node::setData(int data){
	this->data=data;
}
void Node::setNext(Node* n){
	this->next=n;
}
int Node::getData(){
	return this->data;
}
Node* Node::getNext(){
	return this->next;
}