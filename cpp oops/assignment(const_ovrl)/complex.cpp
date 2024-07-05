#include<stdio.h>
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
	complex(){
		this->real=0;
		this->img=0;
		printf("Constructor called\n");//POC
	}
	//parameterised constructor
	complex(int r, int i){
		this->real=r;
		this->img=i;
		printf("Parameterised Constructor called\n");//POC
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
	printf("After setting values of c1 by setters:\n");
	printf("printing by Getters:\n");
	printf("%d+%di",c1.getReal(),c1.getImg());
	return 0;
}