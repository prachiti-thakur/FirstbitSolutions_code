#include"linklist.h"
linklist::linklist(){
	this->start=NULL;
}
void linklist::push(int data){
	Node* temp=new Node(data);
	Node* p=start;
	if(start==NULL){
		start=temp;
		return ;
	}
	
	while(p->getNext()!=NULL){
		p=p->getNext();
	}
	p->setNext(temp);
}
void linklist::pop(){
	Node* p=start;
	if(start==NULL){
		cout<<"stack is empty!\n";
	}
	if(p->getNext()==NULL){
		start=NULL;
		cout<<p->getData()<<" popped\n";
		delete p;
	}
	while(p->getNext()->getNext()!=NULL){
		p=p->getNext();
	}
	Node* q=p->getNext();
	cout<<q->getData()<<"popped\n";
	p->setNext(NULL);
	delete q;
}
void linklist::peek(){
	Node* p=start;
	if(start==NULL){
		cout<<"linklist is empty\n";
	}
	while(p->getNext()!=NULL){
		p=p->getNext();
	}
	
	cout<<p->getData();
}
void linklist::display(){
	Node* p=start;
	while(p!=NULL){
		cout<<p->getData()<<" ";
		p=p->getNext();
	}
	
}
linklist::~linklist(){
	Node* p=NULL;
	while(start!=NULL){
		p=start;
		start=p->getNext();
		delete p;
	}
}