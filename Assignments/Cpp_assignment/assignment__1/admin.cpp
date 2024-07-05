//admin
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct admin{
	int id;
	char name[20];
	//char* name;
	double salary;
	double allowance;
	
	void setId(int a){
		this->id=a;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
		//name=nm; when name is the pointer not char array can assign address to address
	}
	void setSalary(double s){
		this->salary=s;
	}
	void SetAllowance(double al){
		this->allowance=al;
	}
	
	void display(){
		cout<<"Id:"<<this->id<<"\n";
		cout<<"name:"<<this->name<<"\n";
		cout<<"Salary:"<<this->salary<<"\n";
		cout<<"allowance:"<<this->allowance<<"\n";
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
	
	double getallowance(){
		return this->allowance;
	}
	
	//constructor
	admin(){
		this->id=0;
		strcpy(this->name,"Not Given\n");
		this->salary=0;
		this->allowance=0;
		cout<<"Constructor called\n";
	}
	//parameterised constructor
	admin(int i, char* nm,double s,double a){
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->allowance=a;
		cout<<"Parameterised constructor called\n";
	}
};
int main(){
	admin a1;
	printf("a1\n");
	a1.display();
	
	admin a2(105,"shreya",4500,789);
	a2.display();
	int a;
	char name[20];
//char* name;-->not allowed size must be define
	double salary,allowance;
	
	cout<<"Enter Id:";
	cin>>a;
	
	fflush(stdin);
	cout<<"Enter name:";
	gets(name);
	
	cout<<"Enter Salary:";
	cin>>salary;
	
	cout<<"Enter allowance:";
	cin>>allowance;
	
	a1.setId(a);
	a1.setName(name);
	a1.setSalary(salary);
	a1.SetAllowance(allowance);
	//a1.display();
	cout<<"After setting values of a1 by setters:\n";
	cout<<"by getters print:\n";
	cout<<"Id:"<<a1.getid()<<"\n";
	cout<<"name:"<<a1.getname()<<"\n";
	cout<<"Salary:"<<a1.getsalary()<<"\n";
	cout<<"Allowance:"<<a1.getallowance()<<"\n";
	return 0;
}