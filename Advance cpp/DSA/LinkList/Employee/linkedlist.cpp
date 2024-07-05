#include"linkedlist.h"
LinkedList::LinkedList(){
	this->start=NULL;
}
void LinkedList::insertBeg(Employee& e){
	Node* temp=new Node(e);
	temp->setNext(start);
	start=temp;
}
void LinkedList::insertEnd(Employee& e) {
	Node* temp =new Node(e);
	if(start==NULL){
		//cout<<"Linked list is Empty\n";
		temp->setNext(start);
		start=temp;
		return ;
	}
	Node* p =start;
	if(p->getNext()!=NULL){
		p=p->getNext();
	}
	p->setNext(temp);
}
void LinkedList::insertPos(Employee& e,int pos){
	Node* temp=new Node(e);
	
	if(start==NULL){
		temp->setNext(start);
		start=temp;
	}
	int i=1;
	Node* p=start;
	while(i<pos-1 && p->getNext()!=NULL){
		p=p->getNext();
		i++;
	}
		temp->setNext(p->getNext());
		p->setNext(temp);
}


void LinkedList::deleteBeg(){
	if(start==NULL){
		cout<<"linklist is empty\n";
		return;
	}
	Node* p=start;
	p->getEmp().display();
	start=p->getNext();
	delete p;
	return;
}
void LinkedList::deleteEnd(){
	if(start==NULL){
		cout<<"linked list is empty\n";
		return ;
	}
	Node* p=start;
	if(p->getNext()==NULL){
		start->getEmp().display();
		start=start->getNext();
		delete p;
		return;
	}
	while(p->getNext()->getNext()!=NULL){
		p=p->getNext();
	}
	Node* q=p->getNext();
	p->setNext(NULL);
	q->getEmp().display();
	delete q;
	
}
void LinkedList::deleteByPos(int pos){
	Node* p=start;
	if(start==NULL){
		cout<<"linked list is empty\n";
		return;
	}
	if(pos==1){
		start->getEmp().display();
		start=p->getNext();
		
		delete p;
		return;
	}
	
	int i=1;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		i++;
		p=p->getNext();
	}
	//dont allow to delete node if pos is invalid
	if(i==pos-1 && p->getNext()!=NULL){
		Node* q=p->getNext();
		q->getEmp().display();
		p->setNext(q->getNext());
		delete q;
		return;
	}
	else{
		cout<<" Invalid position\n";
		return;
	}
}
int LinkedList::searchNode(int id) {
	if(start==NULL){
		return 0;
	} 
	int i=1;
	Node* p=start;
	while(p!=NULL){
		if(p->getEmp().getid()==id){
			return i;
		}
		else{
			i++;
			p=p->getNext();
		}
	}
	
	return -1;
}
void LinkedList::deleteByData(int id){
	int pos=searchNode(id);
	//cout<<"\nPosition is:"<<pos;
	Node* p=start;
	if(pos==1){
		p->getEmp().display();
		start=p->getNext();
		delete p;
		return ;
	}
	int i=1;
	while(i<pos-1){
		p=p->getNext();
		i++;
	}
	
	Node* q=p->getNext();
	q->getEmp().display();
	p->setNext(q->getNext());
	delete q;
	return;
}
LinkedList::~LinkedList(){
	cout<<"Destructor called!!\n";
	Node* p=NULL;
	while(start!=NULL){
		p=start;
		//p->getEmp().display();
		start=p->getNext();
		delete p;
	}
}

void LinkedList::display(){
	if(start==NULL){
		cout<<"Linked list is Empty\n";
		return;
	}
	Node* p=start;
	
	while(p!=NULL){
		p->getEmp().display();
		p=p->getNext();
	}
}