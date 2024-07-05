//relational(complex)
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
	int operator<(Complex c){
		if(this->real<c.real)
			return 1;
		else
			return 0;
		}

	
	int operator<(int a){
		if(this->real<a)
			return 1;
		else
			return 0;
	}
	
		};
		
int operator<(int,Complex);

int main(){
	Complex c1(10,20);
	c1.display();
	
	Complex c2(2,3);
	c2.display();
	
	
	int res=c1<c2;//c1.operator<(c2);
	if(res==1)
	printf("c1\n");
	else{
		printf("c2\n");
	}
	
	res=c1<9;//c1.operator<(9);
	if(res==1)
	printf("c1\n");
	else
	printf("9\n");
	
	res=9<c1;
	if(res==1)
		printf("9");
	else
		printf("c1\n");
	return 0;
}

int operator<(int a, Complex c){
	if(c.real<a)
		return 1;
	else
		return 0;
}