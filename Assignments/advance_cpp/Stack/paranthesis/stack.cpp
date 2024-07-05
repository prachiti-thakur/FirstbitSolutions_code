#include"stack.h"


Stack::Stack(int s){
	this->size=s;
	this->top=-1;
	this->ptr=new char[size];
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
bool Stack::push(char ch){
	if(isFull()){
		cout<<"Overflow!!\n";
		return false;
	}
	else{
	this->ptr[++top]=ch;
	return true;
	}
}
bool Stack::pop(char& ch){
	
	if(isEmpty()){
		cout<<"Underflow!!\n";
		return false;
	}
	else{
		this->ptr[top--];
		return true;
	}
}

int Stack::getTop(){
	return top;
}

int Stack::setTop(int t){
	this->top=t;
}

char Stack::peek(){
	if(isEmpty()){
		cout<<"No element is present";
		return NULL;
	}
	else{
		return ptr[top];
	}
}