#include"linklinst.h"
linklist::linklist(){
	this->start=NULL;
	
}
void linklist::enqueue(int data){
	Node* temp=new Node(data);
	Node* p=start;
	if(start==NULL){
		start=temp;
		return;
	}
	while(p->getNext()!=NULL){
		p=p->getNext();
	}
	p->setNext(temp);
}
void linklist::dequeue(){
	if(start==NULL){
		cout<<"queue is empty\n";
		return;
	}
	Node* p=start;
	cout<<p->getData()<<"deleted\n";
	start=p->getNext();
	delete p;
	
}
void linklist::display(){
	Node* p=start;
	if(start==NULL){
		cout<<"Queue is empty\n";
		return;
	}
	while(p!=NULL){
		cout<<p->getData()<<"\t";
		p=p->getNext();
	}
}
linklist::~linklist(){
	Node* p=NULL;
	while(p!=NULL){
		p=start;
		start=p->getNext();
		delete p;
	}
}