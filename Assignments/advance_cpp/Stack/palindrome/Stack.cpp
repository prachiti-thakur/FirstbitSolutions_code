#include "stack.h"


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
bool Stack::push(char ch) {
	
	if(isFull()){
		cout<<"OverFlow";
		return false;
	}
	else{
		ptr[++top]=ch;
		return true;
	}
}
bool Stack::pop(char& ch){
	if(isEmpty()){
		cout<<"Underflow!!";
		return false;
	}
	else{
		ch=ptr[top--];
	}
}

int Stack::getTop(){
	return this->top;
}