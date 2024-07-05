//unary increment
//c++ -->c.operator()
//++c-->c.operator(int)

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
	
	Complex operator++(){
		//pre incre
		Complex temp;
		temp.real=++(this->real);
		temp.img=++(this->img);
		return temp;
	}
	
	Complex operator++(int){
		Complex temp;
		temp.real=(this->real)++;
		temp.img=(this->img)++;
		return temp;
	}
	
};
int main(){
	Complex c1(10,20);
	//preincre
	Complex c2=++c1;
	c2.display();
	printf("After increment:");
	c1.display();
	
	Complex c3(2,3);
	//postincre
	c3=c1++;
	c3.display();
	printf("after increment:");
	c1.display();
	return 0;
}