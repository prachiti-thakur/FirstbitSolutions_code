//new by square and round brackets
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
	complex* ptr;
	
	ptr=new complex[5];
	//pointer to array
	ptr[0].display();
	ptr[0].setreal(3);
	ptr[0].setimg(6);
	ptr[0].display();
	ptr[1].setreal(3);
	ptr[1].setimg(6);
	 delete ptr;
		ptr[1].display();//gb
		delete[] ptr;
		ptr[1].display();//gb
	ptr =new complex(50,10);
	//pointer to one structure variable
	ptr->display();

	return 0;
}