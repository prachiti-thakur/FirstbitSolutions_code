#include"linklist.h"

LinkList::LinkList(){
	this->start=NULL;
}
void LinkList::insertBeg(int d){
	//create the new node
	Node* temp=new Node(d);
	//attach new node first
	temp->setNext(this->start);
	//assign the temp to start
	this->start=temp;
}

void LinkList::insertEnd(int data){
	cout<<"i am in insert end function\n";
	Node* temp=new Node(data);//create new node
	//travers the linklist to find last element
	if(this->start==NULL){
		this->start=temp;
	}
	else{
		Node* p=this->start;
	
			while(p->getNext()!=NULL){
				p=p->getNext();
				//cout<<p;
			}
			
			//here p now the last node
			p->setNext(temp);//setting the next to the new node 
	}
	
	
}
void LinkList::display(){
	if(start==NULL){
		
		cout<<"\nLinklist is Empty\n";
	}
	else{
		 Node* p=this->start;
			while(p!=NULL){
				cout<<p->getData()<<"\t";
				p=p->getNext();
			}
	}
}


void LinkList::insertAtPos(int data,int pos){
	Node* temp=new Node(data);
	if(start==NULL){
		start=temp;
		return;
	}
	else if(pos==1){
		temp->setNext(start);
		start=temp;
		return;
	}
	else{
		int i=1;
		Node* p=start;
		while(i<pos-1 && p->getNext()!=NULL){
			p=p->getNext();
			i++;
		}
		//now p is at previous node of pos 
		cout<<"i="<<i<<"\n";
		if(p->getNext()==NULL){
			cout<<"I am here\n";
			p->setNext(temp);
			return;
		}
		temp->setNext(p->getNext());
		p->setNext(temp);			
		
		return;
	}
}

void LinkList::deleteBeg(){
	if(start==NULL){
		cout<<"Linked List is Empty!!\n";
		return ;
	}
	else{
		
		Node* p=start;
		cout<<p->getData()<<"deleted\n";
		start=p->getNext();
		delete p;
		}
	
}
void LinkList::deleteEnd(){
	Node* p=start;
	if(start==NULL){
		cout<<"Linked list is empty!!\n";
		return ;
	}
	else if(p->getNext()==NULL){
		//only one element is present
		cout<<p->getData()<<" is deleted\n";
		start=NULL;
		delete p;
		return;
	}
	else{
		while(p->getNext()->getNext()!=NULL)
		{
			p=p->getNext();
		}
		cout<<p->getNext()->getData()<<" is deleted\n";
		p->setNext(NULL);
		
		delete p->getNext();
		return ;
	}
}


void LinkList::deleteAtPos(int pos){
		//Node * p=start;
		if(start==NULL){
			cout<<"Linked list is empty!!\n";
			return ;
		}
		
		if(pos==1){
			start=start->getNext();
			cout<<start->getData()<<" is deleted\n";
			delete start;
			return;
		}
		
		int i=1;
		Node* p=start;
		while(i<pos-1 && p->getNext()!=NULL){
			i++;
			p=p->getNext();
		}
		
		if(i==pos-1 && p->getNext()!=NULL){// if pos =8 node present 7 so (7==7 && p->getnext()!=NULL )->fails
			Node* q=p->getNext();
			cout<<q->getData()<<" is deleted\n";
			p->setNext(q->getNext());//linkk to next list
			delete q;
			return;
				
		}
		else{
			cout<<"Invalid position\n\n";
		}
	}
	
/*	
void LinkList::deleteBydata(int data){
	Node* p= start;
	if(start==NULL){
		cout<<"Linked list is Empty!!\n";
		return ;
	}
	if(p->getNext()==NULL){
		if(p->getData()==data){
			//delete
			start=NULL;
			cout<<p->getData()<<"is deleted from linked list\n";
			return;
		}
		else{
			cout<<"data not found!!\n";
			return;
		}
	}
	int flag=0;
	while(p->getNext()->getNext()!=NULL){
		if(p->getNext()->getData()==data){
				//delete 
				Node *q= p->getNext();
				p->setNext(q->getNext());//link further list
				cout<<q->getData()<<"is deleted from list\n";
				flag=1;
				delete q;
				
				return;
							
		}
		else{
		p=p->getNext();
		}
	}
	//exit value of p will be sedcond last node
	//for last node
	if(p->getNext()->getData()==data){
			Node *q= p->getNext();
				p->setNext(q->getNext());//link further list
				cout<<q->getData()<<"is deleted from list\n";
				flag=1;
				delete q;
				return;
		
	}
	if(flag==0){
		cout<<"Data not found\n";
		return;
	}
}
*/
int LinkList::searchNode(int data){
	
	Node* p=start;
	if(start==NULL){
		
		return 0;
	}
	
	int i=1;
	while(p!=NULL){
		if(p->getData()==data){
			
			return i;
		}
		else{
		i++;
		p=p->getNext();
		}
		
	}
	//if while is not return means data not found
	return -1;
	
}

void LinkList::deleteBydata(int data) {
		int pos=searchNode(data);
		//cout<<"positon is:"<<pos<<"\n";
		if(pos==-1){
			cout<<"data not found\n";
			return;
		}
		if(pos==0){
			cout<<"linked list is empty\n";
			return;
		}
		if(pos==1){
			cout<<start->getData()<<" is deleted\n";
			start=start->getNext();
			delete start;
			return;
		}
		int i=1;
		Node* p=start;
		while(i<pos-1){
			i++;
			p=p->getNext();
		}
		//p is the previos node
		Node* q=p->getNext();//target node
		p->setNext(q->getNext());//link the further list
		cout<<q->getData()<<" is deleted\n";
		delete q;
		return;
		

}
LinkList::~LinkList(){
	//to avoid the memory leakage
	Node* p=NULL;//to avoid wild pointer initialize it by NULL
	while(this->start!=NULL){
	p=start;
	this->start=p->getNext();
	//here we seperate the node from linklist
	delete p;//delete that node 
	}
}
/*
Node* LinkList::getstart(){
	return this->start;
}
*/ //we cannot give access of start to  anyone so dont write this method

void LinkList::listReverse(Node* p){
	if(p->getNext()!=NULL){
		listReverse(p->getNext());
	}
	cout<<p->getData()<<"\n";
}

void LinkList::reverse(){
	listReverse(start);
}


