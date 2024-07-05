//shapes
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Shapes{
	double area;
	Shapes(){
		cout<<"Default constructor of Shapes!!\n";
		this->area=0;
	}
	Shapes(double a){
		cout<<"Pararmeterised constructor of Shapes!!\n";
		this->area=a;
	}
	void setArea(double a){
		this->area=a;
	}
	
	double getArea(){
		return this->area;
	}
	void display(){
		printf("Area:%lf\n",this->area);
	}
	double tocalculate(){
		return this->area;
	}
};

struct Triangle:Shapes{
	//state
	double height;
	double base;
	Triangle(){
		cout<<"Default constructor of Triangle!!\n";
		this->height=0;
		this->base=0;
	}
	Triangle(double h,double b){
		cout<<"Parameterised constructor of Triangle!!\n";
		this->height=h;
		this->base=b;
	}
	void setHeight(double h){
		this->height=h;
	}
	void setBase(double b){
		this->base=b;
	}
	int getHeight(){
		return this->height;
	}
	int getBase(){
		return this->base;
	}
	void display(){
		
		cout<<"Height "<<this->height<<"\n";
		cout<<"Base:"<<this->base<<"\n";
		Shapes::display();
	}
	
		double tocalculate(){
			this->area=0.5*this->height*this->base;
		return this->area;
	}
};

struct Circle:public Shapes{
	double radius;
	Circle(){
		cout<<"Default constructor of Circle!!\n";
		this->radius=0;
	}
	Circle(double r){
		cout<<"Parameterised constructor of Circle!!\n";
		this->radius=r;
	}
	void setRadius(double r){
		this->radius=r;
	}
	double getRadius(){
		return this->radius;
	}
	void display(){
		
		cout<<"Radius::"<<this->radius<<"\n";
		Shapes::display();
	}
	
		double tocalculate(){
			this->area=3.14*this->radius*this->radius;
		return this->area;
	}
};
struct Rectangle:public Shapes{
	double length;
	double width;
	
	Rectangle(){
		cout<<"default constructor of Rectangle!!\n";
		this->length=0;
		this->width=0;
	}
	Rectangle(double l,double w){
		cout<<"default constructor of Rectangle!!\n";
		this->length=l;
		this->width=w;
	}
	void setLen(double l){
		this->length=l;
	}
	void setWid(double w){
		this->width=w;
	}
	
	double getLen(){
		return this->length;
	}
	double getWid(){
		return this->width;
	}
	void display(){
		cout<<"Length:"<<this->length<<"\n";
		cout<<"Width :"<<this->width<<"\n";
		Shapes::display();
	}
		double tocalculate(){
			this->area=this->length*this->width;
		return this->area;
	}
};
int main(){
	Triangle t1(12,4);
	t1.tocalculate();
	t1.display();
	
	Circle c1(3.2);
	c1.tocalculate();
	c1.display();
	
	Rectangle r1(5,3);
	r1.display();
	r1.tocalculate();
	r1.display();	
	return 0;
}