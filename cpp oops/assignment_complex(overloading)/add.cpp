//complex add
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
		printf("Constructor called\n");//POC
	}
	//parameterised constructor
	Complex(int r, int i){
		this->real=r;
		this->img=i;
		printf("Parameterised Constructor called\n");//POC
	}
	
	//add 
	Complex add(Complex c){
		Complex temp;
		temp.real=this->real+c.real;
		temp.img=this->img+c.img;
		
		return temp;
	}
	
	Complex add(int a){
		Complex temp;
		temp.real=this->real+a;
		temp.img=this->img+a;
		
		return temp;
	}
};

Complex add(int ,Complex);
int main(){
	Complex c1(10,20);
	c1.display();
	Complex c2(5,3);
	c2.display();
	
	Complex c3;
	c3=c1.add(c2);
	c3.display();
	
	Complex c4;
	c4=c1.add(10);
	c4.display();
	
	Complex c5;
	c5=add(10,c1);
	c5.display();
	return 0;
}

Complex add(int a,Complex c){
	Complex temp;
	int r=c.getReal()+a;
	int i=c.getImg()+a;
	temp.setreal(r);
	temp.setimg(i);
	
	return temp;
	}