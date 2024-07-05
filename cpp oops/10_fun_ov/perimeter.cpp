//perimeter
#include<stdio.h>
struct Rectangle{
	double length;
	double breadth;
	double peri;
	
	Rectangle(){
		printf("\ndefault constructor called\n");
		this->length=0;
		this->breadth=0;
		this->peri=0;
	}
	
	Rectangle(double l,double b){
		printf("\nParameterised constructor called!!\n");
		this->length=l;
		this->breadth=b;
		this->peri=0;
	}
	void setLength(double l){
		this->length=l;
	}
	void setBreadth(double b){
		this->breadth=b;
	}
	void setPeri(double peri){
		this->peri=peri;
	}
	double getLength(){
		return this->length;
	}
	
	double getBredth(){
		return this->breadth;
	}
	
	double getPeri(){
		return this->peri;
	}
	
	void display(){
		printf("\nRectangle\n");
		printf("Length:%lf\n",this->length);
		printf("Breadth:%lf\n",this->breadth);
	}
};

struct Circle{
	double radius;
	double peri;
	
	Circle(){
		printf("Defalut constructor called\n");
		this->radius=0;
		this->peri=0;
		
	}
	Circle(double r){
		printf("parameterised constructor called!!");
		this->radius=r;
		this->peri=0;
	}
	
	void setRadius(double r){
		this->radius=r;
	}
	
	void setPeri(double p){
		this->peri=p;
	}
	
	double getRadius(){
		return this->radius;
	}
	
	double getPeri(){
		return this->peri;
	}
	
	void display(){
		printf("Circle:\n");
		printf("Radius:%lf",this->radius);
		printf("Perimeter:%lf\n",this->peri);
	}
	
};
struct Perimeter{
	double tocalculate(Rectangle r){
		double peri=2*(r.getLength()+r.getBredth());
		return peri;
	}
	
	double tocalculate(Circle c){
		double peri=2*3.14*c.getRadius();
		return peri;
	}
};

int main(){
	int choice;
	do{
		printf("\n\n0.Exit\n1.Rectangle\n2.Circle\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		
		Perimeter p;
		
		switch(choice){
			case 1:{
				double result;
				Rectangle r(5,2);
				r.display();
				result=p.tocalculate(r);
				r.setPeri(result);
				printf("Perimeter of Rectangle is:%lf",r.getPeri());
				
				break;
			}
			case 2:{
				double result;
				Circle c(2.5);
				c.display();
				
				result=p.tocalculate(c);
				c.setPeri(result);
				printf("Perimeter of Circle:%lf",c.getPeri());
				break;
			}
			case 0:{
				printf("Thank you for visit!!\n");
				break;
			}
			default:{
				printf("Invalid Inputs\n\n");
				break;
			}
		
		}
		
	}while(choice!=0);
	return 0;
}