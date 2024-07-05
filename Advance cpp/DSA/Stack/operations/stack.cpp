#include "stack.h"

Stack::Stack(int s){
	this->size=s;
	this->top=-1;
	this->sptr=new int[size];
}
bool Stack::isFull(){
	if(top==size-1){
		return true;
	}
	else{
		return false;
	}
}
bool Stack::isEmpty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}
bool Stack::push(int ele){
	if(isFull()){
		cout<<"OverFlow!!\n";
		return false;
	}
	else{
		sptr[++top]=ele;
		return true;
	}
}
bool Stack::pop(int& x){
	if(isEmpty()){
		cout<<"Underflow!!\n";
		return false;
	}
	else{
		x=sptr[top--];
		return true;
	}
}
void Stack::display(){
	if(isEmpty()){
		cout<<"Underflow!!\n";
		
	}
	else{
		for(int i=0;i<=top;i++){
			cout<<sptr[i]<<"\t";
		}
	}
}

int Stack::peek(){
	if(top==-1){
		cout<<"UnderFlow!!";
		return false;
	}
	else{
		return sptr[top];
	}
}