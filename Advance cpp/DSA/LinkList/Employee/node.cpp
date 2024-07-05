#include"node.h"

Node::Node(Employee e){
	this->emp=e;
	this->next=NULL;
}
void Node::setEmp(Employee& e){
	this->emp=e;
}
void Node::setNext(Node* n){
	this->next= n;
}
Employee Node::getEmp(){
	return this->emp;
}
Node* Node::getNext(){
	return this->next;
}