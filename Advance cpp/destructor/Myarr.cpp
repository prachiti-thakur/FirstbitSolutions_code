#include "Myarr.h"
MyArry::MyArry(int s){
	this->size=s;
	this->index=-1;
	this->ptr=new int[5];
}
bool MyArry::isEmpty(){
	if(index==-1){
		return true;
	}
	else{
		return false;
	}
}
bool MyArry::isFull(){
	if(this->index==(size-1)){
		return true;
	}
	else{
		return false;
	}
}
void MyArry::addEle(int ele){
	if(isFull()){
		cout<<"Arry is full!";
	}
	else{
		ptr[index++]=ele;
	}
}
//destructor
MyArry::~MyArry(){
	cout<<"Destructor gets called!!";

	delete[] this->ptr;
}