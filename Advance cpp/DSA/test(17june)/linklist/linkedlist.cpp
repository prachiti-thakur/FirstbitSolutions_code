#include"linkedlist.h"
linkedList::linkedList(){
	this->start=NULL;
}
void linkedList::insertBySort(int data){
//	Node* temp=new Node(data);
//	Node* p=start;
//	
//	if(start==NULL){
//		start=temp;
//		return;
//	}
//	if(p->getNext()==NULL){
//		if(temp->getData()<p->getData()){
//			
//			temp->setNext(p);
//			start=temp;
//			return;
//		}
//		else{
//			p->setNext(temp);
//			return;
//		}
//	}
//	
//	while(p->getNext()->getNext()!=NULL){
//		if(temp->getData()<p->getNext()->getData()){
//			temp->setNext(p->getNext());
//			p->setNext(temp);
//			return;
//		}
//		else{
//			p=p->getNext();
//		}
//	}
//	//for last element
//	if(temp->getData()<p->getNext()->getData()){
//			temp->setNext(p->getNext());
//			p->setNext(temp);
//			return;
//		}
	Node* temp=new Node(data);
	Node* p=start;
	Node* q=NULL;
	if(start==NULL){
		start=temp;
	}
	else if(start->getData()>temp->getData()){
		temp->setNext(start);
		start=temp;
	}
	else{
		while(p!=NULL){
			if(temp->getData()<p->getData()){
				temp->setNext(p);
				q->setNext(temp);
				
				return;
			}
			q=p;
			p=p->getNext();
		}
		q->setNext(temp);
	}
}
void linkedList::display(){
	Node* p=start;
	while(p!=NULL){
		cout<<p->getData()<<" ";
		p=p->getNext();
	}
}

Node* linkedList::searchForDelete(int data){
	Node* p=start;
	if(p->getNext()==NULL){
		
		if(p->getData()==data){
			return p;
		}
	}
	
	//for 1st element
	if(p->getData()==data){
		cout<<p->getData();
		return p;
	}
	while(p->getNext()->getNext()!=NULL){
		if(p->getNext()->getData()==data){
			
			return p;
		}
		else{
			p=p->getNext();
		}
	}
	
	//for last element;
	if(p->getNext()->getData()==data){
		return p;
	}
	
	return NULL;
}

void linkedList::deleteBYdata(int data){
	Node* preAdd=searchForDelete(data);
	Node* q=NULL;
	if(preAdd->getNext()==NULL){
		q=preAdd;
		start=q->getNext();
	}
	if(preAdd->getData()==data){
		q=preAdd;
		start=q->getNext();
		cout<<q->getData()<<"is deleted";
		preAdd->setNext(q->getNext());
		delete q;
		return;
	}
	if(preAdd!=NULL){
		q=preAdd->getNext();
		cout<<q->getData()<<"is delete";
		preAdd->setNext(q->getNext());
		delete q;
		return;
	}
	else{
		cout<<"element not found";
		return;
	}
	

}