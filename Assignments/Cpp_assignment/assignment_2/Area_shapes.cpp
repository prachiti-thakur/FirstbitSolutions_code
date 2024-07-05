//area of shapes
#include<stdio.h>
#include<iostream>
using namespace std;
struct Triangle{
	double height;
	double base;
	
	Triangle(){
		this->height=0;
		this->base=0;
		cout<<"Defalut const\n";
	}
	
	Triangle(double h,double b){
		this->height=h;
		this->base=b;
		cout<<"Parameterised const\n";
	}
	
	void setHeight(double h){
		this->height=h;
	}
	void setBase(double b){
		this->base=b;
	}
	
	double getHeight(){
		return this->height;
	}
	
	double getBase(){
		return this->base;
	}
	
	void display(){
		cout<<"Height:"<<this->height<<"\n";
		cout<<"Base:"<<this->base<<"\n";
	}
};


struct Rectangle{
	double length;
	double breadth;
	
	Rectangle(){
		cout<<"defalut const\n";
		this->length=0;
		this->breadth=0;
	}
	
	Rectangle(double l,double b){
		cout<<"Parameterised const\n";
		this->length=l;
		this->breadth=b;
	}
	
	void setLength(double l){
		this->length=l;
	}
	void setBreadth(double b){
		this->breadth=b;
	}
	
	double getLength(){
		return this->length;
	}
	
	double getBreadth(){
		return this->breadth;
	}
	
	void display(){
		cout<<"Length:"<<this->length<<"\n";
		cout<<"Breadth:"<<this->breadth<<"\n";
	}
};

struct Circle{
	double radius;
	
	Circle(){
		cout<<"defalut const\n";
		this->radius=0;
	}
	
	Circle(double r){
		cout<<"Parameterised const\n";
		this->radius=r;
	}
	
	void setRadius(double r){
		this->radius=r;
	}
	
	double getRadiud(){
		return this->radius;
	}
	
	void display(){
		cout<<"Radius:"<<this->radius<<"\n";
	}
	
};

struct ShapeOperation{
	
	double calculateArea(Triangle t){
		return (0.5*t.getHeight()*t.getBase());
	}
	
	double calculateArea(Rectangle r){
		return (r.getLength()*r.getBreadth());
	}
	
	double calculateArea(Circle c){
		return (3.14*c.radius*c.radius);
	}
};

int main(){
	
	Triangle t1(10,2);
	t1.display();
	Rectangle r1(5,3);
	r1.display();
	Circle c1(5.3);
	c1.display();
	
	ShapeOperation S;
	double Area_T=S.calculateArea(t1);
	cout<<"Area of Triangle:"<<Area_T<<"\n";
	
	double Area_R=S.calculateArea(r1);
	cout<<"Area of Rectangle:"<<Area_R<<"\n";
	
	double Area_C=S.calculateArea(c1);
	cout<<"Area of Circle:"<<Area_C<<"\n";
	
	return 0;
}