
#include<stdio.h>
struct Complex{
	int real;
	int img;
	
	Complex(){
		this->real=0;
		this->img=0;
		printf("Defalut construtor called!\n");
		
	}
	Complex(int r,int i){
		this->real=r;
		this->img=i;
		printf("parameterised constructor!\n");
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
		printf("\n%d+%di\n",this->real,this->img);
	}
	
	Complex sub(Complex c){
		Complex temp;
		temp.real=this->real-c.real;
		temp.img=this->img-c.img;
		return temp;
	}
	
	Complex sub(int a){
		Complex temp;
		temp.real=this->real-a;
		temp.img=this->img-a;
		return temp;
	}
	
	
};

//declaration of the global function
Complex sub(int ,Complex);

int main(){
	Complex c1(20,40);
	c1.display();
	Complex c2(2,4);
	c2.display();
	
	Complex c3;
	c3=c1.sub(c2);
	c3.display();
	
	Complex c4;
	c4=c1.sub(10);
	c4.display();
	
	Complex c5;
	c5=sub(10,c1);
	c5.display();
	return 0;
}

Complex sub(int a,Complex c){
	Complex temp;
	temp.setReal(c.getReal()-a);
	temp.setImg(c.getImg()-a);
	return temp;
}
