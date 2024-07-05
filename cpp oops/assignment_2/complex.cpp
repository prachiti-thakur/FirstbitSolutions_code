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
};
int main(){
	complex c1;
	c1.display();
	c1.setreal(10);
	c1.setimg(5);
	//c1.display();
	printf("%d+%di",c1.getReal(),c1.getImg());
	return 0;
}