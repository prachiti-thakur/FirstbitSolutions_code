//div

#include<stdio.h>
struct Complex{
	int real;
	int img;
	
	Complex(){
		printf("Deflaut constructor called!\n");
		this->real=0;
		this->img=0;
	}
	
	Complex(int r,int i){
		printf("Parameterised constructor called!!\n");
		this->real=r;
		this->img=i;
	}
	
	void setReal(int r){
		this->real=r;
	}
	
	void setImg(int i){
		this->img=i;
	}
	
	int getReal(){
		return this->real;
	}
	
	int getImg(){
		return this->img;
	}
	
	void display(){
		printf("%d+%di\n",this->real,this->img);
	}
	
	Complex mul(Complex c){
		Complex temp;
		temp.real=this->real*c.real;
		temp.img=this->img*c.img;
		return temp;
	}
	
	Complex mul(int a){
		Complex temp;
		temp.real=this->real*a;
		temp.img=this->img*a;
		return temp;
	}
	
	
};

//declartion of global function
Complex mul(int , Complex );
int main(){
	
	Complex c1(10,20);
	c1.display();
	Complex c2(2,3);
	c2.display();
	Complex c3;
	c3=c1.mul(c2);
	c3.display();
	Complex c4;
	c4=c1.mul(2);
	c4.display();
	
	Complex c5;
	c5=mul(2,c1);
	c5.display();
	
	return 0;
	
}
Complex mul(int a, Complex c){
	Complex temp;
	int r=c.real*a;
	temp.setReal(r);
	int i=c.real*a;
	temp.setImg(i);
	
	return temp;
}