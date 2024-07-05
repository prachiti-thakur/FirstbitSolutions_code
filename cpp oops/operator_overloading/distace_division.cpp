//div


//division distance
//distance
#include<stdio.h>
#include<string.h>
struct Distance{
	double feets;
	double inches;
	
	
	//setters
		void setFeets(double F){
		this->feets=F;
	}
	
	
	void setInches(double inches){
		this->inches=inches;
		
	}
	

	void display(){
		printf("%.2lf feets,%.2lf inches\n",this->inches,this->feets);
	}
	
	//getters
	
	double getfeets(){
		return this->feets;
	}
	
	double getinches(){
		return this->inches;
	}
	
	//constructor
	Distance(){
		this->feets=0;
		this->inches=0;
		printf("Constructor called\n");//POC
	}
	
	Distance(float f,float i){
		this->feets=f;
		this->inches=i;
		printf("Parameterised constructor called\n");
	}
	
	Distance operator/(Distance d){
		Distance temp;
		temp.feets=this->feets/d.feets;
		temp.inches=this->inches/d.inches;
		return temp;
	}
	
	Distance operator/(int a){// 1 20 59--> 1 20 58 // 1 20 01 --> 1 20 00 //1 20 -01
		Distance temp;
		temp.feets=this->feets/a;
		temp.inches=this->inches/a;
		return temp;
	}
	
};

Distance operator/(int,Distance);

int main(){
	Distance d1(20,40);
	d1.display();
	Distance d2(10,20);
	d2.display();
	
	Distance d3;
	d3=d1/d2;//d1.operator/(d2)
	d3.display();
	
	Distance d4;
	d4=d1/2;//d1.operator/(2)
	d4.display();
	
	Distance d5;
	d5=2/d1;//operator/(2,d1);
	d5.display();
	
	return 0;
}

Distance operator/(int a,Distance d){
	Distance temp;
	double f=a/d.getfeets();
	double i=a/d.getinches();
	
	temp.setFeets(f);
	temp.setInches(i);
	
	return temp;
}