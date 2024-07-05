#include"myarr.h"
#include"admin.h"
#include "hrh.h"
MyArry::MyArry(int s)//only parameterised constructor bcz without size arry must not be create
{
	this->size=s;
	this->index=-1;
	this->ptr=new Employee*[size];
	
}
bool MyArry::isFull()
{
	if(index<size-1){
		return false;
	}
	else{
		//index is greater
		return true;//arry is full
	}
}
bool MyArry::isEmpty(){
	if(index==-1){
		return true;
	}
	else{
		return false;
	}
}
void MyArry::addElement(Employee* e){
	
	if(isFull()){
		cout<<"\nArray is full\n";
	}
	else{
		
		//increment index
		Admin* p=dynamic_cast<Admin*>(e);
		hr* h=dynamic_cast<hr*>(e);
		if(p!=NULL){
			ptr[++index]=p;
		}
		else if(h!=NULL){
			ptr[++index]=h;
		}
		

		cout<<"element successfully added!";
	}
}

int MyArry::searchElement(int id){
	if(isEmpty()){
		//cout<<"Element not found!!";
		return -1;
	}
	else{
		
		for(int i=0;i<=index;i++){
			if(id==ptr[i]->getid()){//pointer to one class variable arrow
				return i;
			}
		}
			
	}
	
	//if not found after searching by loop
	return -1;
	
}


void MyArry::deleteElement(int ele){
	if(isEmpty()){
		cout<<"Array is Empty";
	}
	else{
		//search the index of the element wants to search
		int ind=searchElement(ele);
		if(ind!=-1){
			for(int i=ind;i<index;i++){
				ptr[i]=ptr[i+1];
			}
			
			//index must be decrese by 1
			index--;
		}
		else{
			cout<<"Not Found";
		}
		
		cout<<"Element successfully deleted!";
	}
}

void MyArry::displayElements(){
	if(isEmpty()){
		cout<<"Array is empty";
	}
	else{
		cout<<"Array:\t";
		for(int i=0;i<=index;i++){
			
			cout<<*(ptr[i])<<"\t";
		}
	}
}
/*
void MyArry::displayOne(int i){
	cout<<"\nEmployee:\n\n";
	
	
	cout<<"id:"<<ptr[i]->getid()<<"\n";
	cout<<"name:"<<ptr[i]->getname()<<"\n";
	cout<<"Salary:"<<ptr[i]->setsalary()<<"\n";
}
*/