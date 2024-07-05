#include"linklist.h"
template<class T>
LinkedList<T>::LinkedList(){
	this->start=NULL;
}
//copy constructor
template<class T>
LinkedList<T>::LinkedList(LinkedList& ply){
	this->start=NULL;
	Node<T>* p=ply.start;
	while(p!=NULL){
		this->insertEnd(p->getPly());
		p=p->getNext();
	}
}

template<class T>
void LinkedList<T>::insertBeg(T& ply){
	Node<T>* temp =new Node<T>(ply);
	
	temp->setNext(start);
	start=temp;
}

template<class T>
void LinkedList<T>::insertEnd(T& ply){
	Node<T>* temp =new Node<T>(ply);
	if(start==NULL){
		start=temp;
		return;
	}
	Node<T>* p=start;
	while(p->getNext()!=NULL){
		p=p->getNext();
	}
	
	p->setNext(temp);
}

template<class T>
void LinkedList<T>::insertAtPos(T& ply,int pos){
	Node<T>* temp=new Node<T>(ply);
	Node<T>* p=start;
	int i=1;
	if(start==NULL){
	  start=temp;
		return ;
	}
	if(pos==1){
		temp->setNext(start);
		start=temp;
		return;
	}
	while(i<pos-1 && p->getNext()!=NULL){
		i++;
		p=p->getNext();	
	}
	
	temp->setNext(p->getNext());
	p->setNext(temp);
	

}


template<class T>
void LinkedList<T>::deleteBeg(){
	if(start==NULL){
		cout<<"linklist is empty!!\n";
		return;
	}
	
	Node<T>* p=start;
	start=p->getNext();
	p->getPly().display();
	delete p;
	
	}


template<class T>
void LinkedList<T>::deleteEnd(){
	Node<T>* p=start;
	if(start==NULL){
		cout<<"Linklist is empty\n";
		return;
	}
	if(p->getNext()==NULL){
		start=NULL;
		p->getPly().display();
		delete p;
		return;
	}
	while(p->getNext()->getNext()!=NULL){
		p=p->getNext();
	}
	Node<T>* q=p->getNext();
	q->getPly().display();
	p->setNext(NULL);
	delete q;
}


template<class T>
void LinkedList<T>::deleteAtPos(int pos){
	
	int i=1;
	Node<T>* p=start;
	if(start==NULL){
		cout<<"linklist is empty!!\n";
		return ;
	}
	if(pos==1){
		
		
		start=p->getNext();
		p->getPly().display();
		delete p;
		
		return ;
	}
	
	while(i<pos-1 && p->getNext()!=NULL){
		p=p->getNext();
		i++;
	}
	
	if(i==pos-1){
		Node<T>* q=p->getNext();
		q->getPly().display();
		p->setNext(q->getNext());
		delete q;
		
	}
	else{
		cout<<"Invalid inputs\n";
		return;
	}
	
}


template<class T>
int LinkedList<T>::searchNode(int jrNo){
	Node<T>* p=start;
	int i=1;
	if(start==NULL){
		return 0;
	}
	if(p->getNext()==NULL){
		if(p->getPly().getJersyNum()==jrNo){
			return i;
		}
	}
	while(p->getNext()!=NULL){
		if(p->getPly().getJersyNum()==jrNo){
			return i;
		}
		else{
			p=p->getNext();
			i++;
		}
	}
	
	return -1;
}

template<class T>
void LinkedList<T>::deleteByData(int jrNo){
	int res=searchNode(jrNo);
	Node<T>* p=start;
	if(res==1){
		p->getPly().display();
		start=p->getNext();
		delete p;
		return;
	}
	if(res!=-1){
		int i=1;
		
		while(i<res-1){
			p=p->getNext();
		}
		
		Node<T>* q=p->getNext();
		q->getPly().display();
		p->setNext(q->getNext());
		delete q;
		return ;
	}
	
		if(res==-1){
			cout<<"node not found!!\n";
			return ;
		}
		
		if(res==0){
			cout<<"linked list is empty\n";
			return;
		}
	
}

template<class T>
void LinkedList<T>::display(){
	Node<T>* p=start;
	if(start==NULL){
		cout<<"linklist is empty\n";
		return ;
	}
	while(p!=NULL){
		p->getPly().display();
		p=p->getNext();
	}
}

template<class T>
LinkedList<T>::~LinkedList(){
	Node<T>* p=NULL;
	if(start==NULL){
		return;
	}
	while(start!=NULL){
		p=start;
		start=p->getNext();
		delete p;
	}
}

////////////////////////////////////
template<class T>
Node<T>* LinkedList<T>::searchByJersy(int jrno){
	
	Node<T>* p=start;
	while(p!=NULL)
	{
		if(p->getPly().getJersyNum()==jrno){
			return p;
		}
		else{
			p=p->getNext();
		}
	}
	
	//if not found
	return NULL;
	
}
template<class T>
Node<T>* LinkedList<T>::searchByName(char*nm){
	
	Node<T>* p=start;
	while(p!=NULL){
		int res=strcasecmp(p->getPly().getName(),nm);
		if(res==0){
			return p;
		}
		else{
			p=p->getNext();
		}
	}
	//out of while loop
	return NULL;
}
template<class T>
void LinkedList<T>::update(){
	cout<<"\nupdate :\n";
	cout<<"1.update player by jersy number:\n";
	cout<<"2.update player by name:\n";
	int choice;
	cout<<"Enter the choice:";
	cin>>choice;
	switch(choice){
		case 1:{
			//update by jersy number
			int jrno;
			cout<<"Enter the jersy number:";
			cin>>jrno;
			Node<T>* nodeAdd=searchByJersy(jrno);
			cout<<"1.update run\n";
			cout<<"2.update wickets\n";
			cout<<"3.update matches\n";
			
			int ch;
			cout<<"Enter the choice:";
			cin>>ch;
			
			switch(ch){
				
				case 1:{
					//run
					int run;
					cout<<"Enter the updated runs:";
					cin>>run;
				//	nodeAdd->getPly().setNoRuns(run);
				//in link list this will not work we cannot update only one value of obj we have change entire obj 
				//entire data in the node can change 
				T ply; //->create obj of player(data)
				ply=nodeAdd->getPly();//->copy all previous data into new obj
				ply.setNoRuns(run);//->update the value
				nodeAdd->setPly(ply);//->reset the player into node
				
				nodeAdd->getPly().display();
							
				cout<<"Data successfully updated\n";
				
					break;
				}
				case 2:{
					//wickets
					int wickets;
					cout<<"Enter the updates Wickets:";
					cin>>wickets;
					//nodeAdd->getPly().setNoWickets(wickets);
				T ply; 
				ply=nodeAdd->getPly();
				ply.setNoWickets(wickets);
				nodeAdd->setPly(ply);
				
				nodeAdd->getPly().display();
							
				cout<<"Data successfully updated\n";
				
					break;
				}
				case 3:{
					//matches
					int matches;
					cout<<"Enter the updated matches:";
					cin>>matches;
					//nodeAdd->getPly().setNoMatches(matches);
				T ply; 
				ply=nodeAdd->getPly();
				ply.setNoMatches(matches);
				nodeAdd->setPly(ply);
				
				nodeAdd->getPly().display();
							
				cout<<"Data successfully updated\n";
					
					break;
				}
			}//out of switch
			
			break;
		}
		case 2:{
			//update by name
			 char name[20];
			 cout<<"Enter the name to update the player:";
			 cin>>name;
			 
			 Node<T>* nodeAdd=searchByName(name);
			 	cout<<"update:\n";
			 	cout<<"1.update run:\n";
			 	cout<<"2.update wickets\n";
			 	cout<<"3.update matches:\n";
			 	
			 	int ch;
			 	cout<<"Enter the choice:";
			 	cin>>ch;
			 	    switch(ch){
			 	    	case 1:{
			 	    		//run
			 	    		int run;
			 	    		cout<<"Enter the updated runs:";
			 	    		cin>>run;
			 	    		T ply;
			 	    		ply=nodeAdd->getPly();
			 	    		ply.setNoRuns(run);
			 	    		nodeAdd->setPly(ply);
			 	    		
			 	    		nodeAdd->getPly().display();
							
							cout<<"Data successfully updated\n";
			 	    		
							break;
						 }
						case 2:{
							//wickets
							int wickets;
							cout<<"Enter the updated wickets:";
							cin>>wickets;
							T ply;
							ply=nodeAdd->getPly();
							ply.setNoWickets(wickets);
							nodeAdd->setPly(ply);
							
							nodeAdd->getPly().display();
							
							cout<<"Data successfully updated\n";
							
							break;
						}
						case 3:{
							//matches
							int matches;
							cout<<"Enter the updated matches:";
							cin>>matches;
							
							T ply;
							ply=nodeAdd->getPly();
							ply.setNoMatches(matches);
							nodeAdd->setPly(ply);
							
							nodeAdd->getPly().display();
							
							cout<<"Data successfully updated\n";
							break;
						}
					 }//out of switch 
			
			break;
		}
	}//out of switch
}


template<class T>
Node<T>* LinkedList<T>::searchForDelete(int id){
	
	Node<T>* p=start;
	if(start->getPly().getJersyNum()==id){// check for one node's data
		return start;
	}
	while(p->getNext()!=NULL){
		if(p->getNext()->getPly().getJersyNum()==id){
			return p;
		}
		else{
			p=p->getNext();
		}
	}
	
	return NULL;
}



template<class T>
void LinkedList<T>::deleteById(int data){
	Node<T>* nodeAdd=searchForDelete(data);
	//if data is on first node
	
	if(nodeAdd->getPly().getJersyNum()==data){
		nodeAdd->getPly().display();
		start=nodeAdd->getNext();
		delete nodeAdd;
		return;
	}
	
	
	//delete the next node
	Node<T>* q=nodeAdd->getNext();
	q->getPly().display();
	nodeAdd->setNext(q->getNext());
	delete q;
	
}

template<class T>
void LinkedList<T>::sort(){
	LinkedList plylist(*this);
	
	plylist.plySort();
}


template<class T>
void LinkedList<T>::plySort(){
	cout<<"1.Ascending\n";
	cout<<"2.descending\n";
	int choice;
	cout<<"Enter the choice:\n";
	cin>>choice;
	switch(choice){
		case 1:{
			//by ascending order (runs)
			Node<T>* p=this->start;
			Node<T>* min=start;
			while(p->getNext()!=NULL){
				min=p;
				Node<T>* q=p->getNext();
				while(q!=NULL){
					if(min->getPly().getRuns()>q->getPly().getRuns()){
						min=q;
					}
					
					q=q->getNext();//for next iterations
				}
				//swap
				T plyer;
				plyer=p->getPly();
				Player minP=min->getPly();
				p->setPly(minP);
				min->setPly(plyer);
				
				//for next iteration
				p=p->getNext();
				
				
			}
			
			//display sorted linklist
			this->display();
	
			
			break;
		}
		case 2:{
			
			//by descending by runs
			Node<T>* p=this->start;
			Node<T>* max=start;
			while(p->getNext()!=NULL){
				max=p;
				Node<T>* q=p->getNext();
				while(q!=NULL){
					if(max->getPly().getRuns()<q->getPly().getRuns()){
						max=q;
					}
					
					q=q->getNext();//for next iterations
				}
				//swap
				T plyer;
				plyer=p->getPly();
				Player minP=max->getPly();
				p->setPly(minP);
				max->setPly(plyer);
				
				//for next iteration
				p=p->getNext();
				
				
			}
			
			//display sorted linklist
			this->display();
			
			
			break;
		}
	}//out of switch
	
	
	
}