#include<stdio.h>
#include<iostream>
using namespace std;
struct complex{
	int real;
	int img;
	
	//setters
	void setreal(int r){
		this->real=r;
	}
	void setimg(int i){
		this->img=i;
	}
	
	void display(){
		cout<<this->real<<"+"<<this->img<<"i"<<"\n";
	}
	
	//getters
	int getReal(){
		return this->real;
	}
	
	int getImg(){
		return this->img;
	}
	
	//constructor
	complex(){
		this->real=0;
		this->img=0;
		cout<<"Constructor called\n";//POC
	}
	//parameterised constructor
	complex(int r, int i){
		this->real=r;
		this->img=i;
		cout<<"Parameterised Constructor called\n";//POC
	}
};
int main(){
	complex c1;
	printf("c1\n");
	c1.display();
	complex c2(20,5);
	c2.display();
	c1.setreal(10);
	c1.setimg(5);
	//c1.display();
	cout<<"After setting values of c1 by setters:\n";
	cout<<"printing by Getters:\n";
	cout<<c1.getReal()<<"+"<<c1.getImg()<<"i"<<"\n";
	return 0;
}