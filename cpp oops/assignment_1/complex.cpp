#include<stdio.h>
struct complex{
	int real;
	int complex;
	
	void setreal(int r){
		this->real=r;
	}
	void setcomplex(int i){
		this->complex=i;
	}
	
	void display(){
		printf("%d+%di",this->real,this->complex);
	}
};
int main(){
	complex c1;
	c1.setreal(10);
	c1.setcomplex(5);
	c1.display();
	return 0;
}