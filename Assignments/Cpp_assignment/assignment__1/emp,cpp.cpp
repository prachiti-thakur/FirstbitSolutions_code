//employee
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct employee{
	int id;
	char name[20];
	double salary;
	//this == represents address of current invoke object
	//setters
	void setid(int a){
		this->id=a;
	}
	void setname(char* nm){
		strcpy(this->name,nm);
	}
	void setsalary(double s){
		this->salary=s;
	}
	void display(){
		cout<<"id:"<<this->id<<"\n";
		cout<<"Name :"<<this->name<<"\n";
		cout<<"Salary:"<<this->salary<<"\n";
		
	}
	
	//getters
	int getid(){
		return this->id;
	}
	
	char* getname(){
		
		return this->name;
	}
	
	double getsalary(){
		return this->salary;
	}
	
	//constructor
	employee(){
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		cout<<"Constructor called\n";
	}
	//parameterised constructor
	employee(int i,char* nm,double s){
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		cout<<"Parameterised constructor called\n";
	}
};
int main(){
	employee e1;
	printf("e1\n");
	e1.display();
	employee e2(102,"Prachiti",85000);
	e2.display();
	e1.setid(101);
	e1.setname("Hrutu");
	e1.setsalary(20000);
	//e1.display();
	cout<<"after setting values of e1 by setter :\n";
	cout<<"ID:"<<e1.getid()<<"\n";
	cout<<"Name:"<<e1.getname()<<"\n";
	cout<<"Salary:"<<e1.getsalary()<<"\n";
	
	
	return 0;
}
