#include"node.h"
template<class T>
Node<T>::Node(T p){
	this->ply=p;
	this->next=NULL;
}
template<class T>
void Node<T>::setPly(T& p){
	this->ply=p;
}
template<class T>
void Node<T>::setNext(Node* n){
	this->next=n;
}
template<class T>
T& Node<T>::getPly(){
	return this->ply;
}
template<class T>
Node<T>* Node<T>::getNext(){
	return this->next;
}