//division

#include<stdio.h>
struct Complex{
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
		printf("%d+%di\n",this->real,this->img);
	}
	
	//getters
	int getReal(){
		return this->real;
	}
	
	int getImg(){
		return this->img;
	}
	
	//constructor
	Complex(){
		this->real=0;
		this->img=0;
		printf("Default Constructor called\n");//POC
	}
	//parameterised constructor
	Complex(int r, int i){
		this->real=r;
		this->img=i;
		printf("Parameterised Constructor called\n");//POC
	}
	
	//overloading
	Complex operator/(Complex c){
		Complex temp;
		temp.real=this->real/c.real;
		temp.img=this->img/c.img;
		return temp;
	}
	
	Complex operator/(int a){
		Complex temp;
		temp.real=this->real/a;
		temp.img=this->img/a;
		return temp;
	}
};

Complex operator/(int a,Complex c){
	Complex temp;
	//outside ==> throught behaviour(access)
	int r=c.getReal()/a;
	int i=c.getImg()/a;
	temp.setreal(r);
	temp.setimg(i);
	return temp;
}