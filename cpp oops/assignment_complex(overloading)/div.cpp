//div
#include<stdio.h>
struct Complex{
	int real;
	int img;
	
	Complex(){
		printf("Defalut constructor called!!\n");
		this->real=0;
		this->img=0;
	}
	Complex(int r,int i){
		printf("parameterised constructor called!!\n");
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
	
	Complex div(Complex c){
		Complex temp;
		temp.real=this->real/c.real;
		temp.img=this->img/c.img;
		return temp;
	}
	
	Complex div(int a){
		Complex temp;
		temp.real=this->real/a;
		temp.img=this->img/a;
		return temp;
	}
};
Complex div(int,Complex);

int main(){
	Complex c1(20,40);
	c1.display();
	
	Complex c2(2,4);
	c2.display();
	
	Complex c3;
	c3=c1.div(c2);
	c3.display();
	
	Complex c4;
	c4=c1.div(2);
	c4.display();
	
	Complex c5;
	c5=div(2,c1);
	c5.display();
	return 0;
}

Complex div(int a,Complex c){
	Complex temp;
	int r=c.getReal()/a;
	int i=c.getImg()/a;
	temp.setReal(r);
	temp.setImg(i);
	
	return temp;
}