#include"Myarr.h"

MyArry::MyArry(MyArry& arr){
	this->size=arr.size;
	this->index=arr.index;
	this->ptr=new int[size];
	//copy. value of index one by one
	for(int i=0;i<=index;i++){
		ptr[i]=arr.ptr[i];
	}
}
MyArry::MyArry(int s)//only parameterised constructor bcz without size arry must not be create
{
	this->size=s;
	this->index=-1;
	this->ptr=new int[size];
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
void MyArry::addElement(int ele){
	
	if(isFull()){
		cout<<"\nArray is full\n";
	}
	else{
		//index++;
		//ptr[index]=ele;
		ptr[++index]=ele;
		cout<<"element successfully added!";
	}
}

int MyArry::searchElement(int ele){
	if(isEmpty()){
		cout<<"Element not found!!";
		return -1;
	}
	else{
		for(int i=0;i<=index;i++){
			if(ele==ptr[i]){
				return i;
			}
		}
		
	}
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
			
			cout<<ptr[i]<<"\t";
		}
	}
}

