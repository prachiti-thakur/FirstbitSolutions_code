//distance
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
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
		cout<<this->inches<< "inches,"<<this->feets<<"\n";
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
		cout<<"Constructor called\n";//POC
	}
	
	Distance(float f,float i){
		this->feets=f;
		this->inches=i;
		cout<<"Parameterised constructor called\n";
	}
};
int main(){
	Distance d;
	d.display();
	Distance d1(10,20);
	d1.display();
	d.setFeets(11.7);
	d.setInches(10.5);
	//d.display();
	cout<<"After setting values:";
	cout<<d.getfeets()<<"Feets ,"<<d.getinches()<<"inches";
	
	return 0;
}