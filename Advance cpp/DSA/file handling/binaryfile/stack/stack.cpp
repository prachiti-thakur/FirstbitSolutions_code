#include"Stack.h"
#include<fstream>
template <class T>
Stack<T>::Stack(){
	this->top=-1;
	this->ptr=NULL;
	
	int data;
	int count=0;
	ifstream in("MyStack.txt");
	while(!in.eof()){
		in>>data;
		if(in.eof()){
			break;
		}
		count++;
	
	}
	in.close();
	int i=0;
	this->ptr=new int[count];
	ifstream in1("MyStack.txt");
	while(!in1.eof()){
		in1>>data;
		if(in1.eof()){
			break;
		}
		ptr[i]=data;//fill the stack;
		this->top++;
		i++;
	}
	
}

template <class T>
void Stack<T>::push(T data){
	if(ptr==NULL){
		this->ptr=new T[top+2];//to make array of size 1
		ptr[++top]=data;
		return;
	}
	else{
		T* q=ptr;
		this->ptr=new T[top+2];
		//copy
		for(int i=0;i<=top;i++){
			ptr[i]=q[i];
		}
		
		ptr[++top]=data;
		return;
		
	}
	
	
}

template <class T>
void Stack<T>::pop(){
	int* q=ptr;
	this->ptr=new T[top];
	for(int i=0;i<top;i++){
		ptr[i]=q[i];		
	}
	
	top--;
	
	
	
	
	
}

template <class T>
T Stack<T>::topS(){
	return ptr[top];
}


template <class T>
void Stack<T>::display(){
	for(int i=0;i<=top;i++){
		cout<<ptr[i]<<"\n";
	}
}
template<class T>
Stack<T>::~Stack(){
	ofstream out("MyStack.txt");
	for(int i=0;i<=top;i++){
		out<<ptr[i]<<"\n";
	}
	out.close();
	delete[] ptr;
}