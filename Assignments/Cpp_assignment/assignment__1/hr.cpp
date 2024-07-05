//hr
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Hr{
	int id;
	char name[20];
	double salary;
	double commission;
	
	void setId(int a){
		this->id=a;
	}
	void setName(const char* nm){
		strcpy(this->name,nm);
	}
	void setSalary(double s){
		this->salary=s;
	}
	void setCommission(double c){
		this->commission=c;
	}
	void display(){
		cout<<"Id:"<<this->id<<"\n";
		cout<<"name:"<<this->name<<"\n";
		cout<<"Salary:"<<this->salary<<"\n";
		cout<<"commission:"<<this->commission<<"\n";
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
	
	double getcommision(){
		return this->commission;
	}
	
	//constructor
	Hr(){
		this->id=0;
		strcpy(this->name,"Not Given");
		this->salary=0;
		this->commission=0;
		cout<<"Constructor called\n";
	}
	//parameterised constructor
	Hr(int i,char* nm,double s,double c){
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->commission=c;
		cout<<"Parameterised constructor called\n";
	}
};

int main(){
	Hr h1;
	printf("h1\n");
	h1.display();
	Hr h2(104,"pravin",5600,780);
	h2.display();
	h1.setId(103);
	// ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]-->const required when we pass the  hardcoded string as paramter                                                                                                                                                     
	h1.setName("prachiti");//here "prachiti" is store in dummy so in defination when we catch  the address that point varible shouble be constant "Prachiti" pointer jyala point kart ahe ti value constant asli pahije //complier saying that dont change the address
	h1.setSalary(200000);
	h1.setCommission(5000);
	//h1.display();
	cout<<"After Setting the value of h1 from the setters:\n";
cout<<"print by using the getters:\n";
	
	cout<<"ID:"<<h1.getid()<<"\n";
	cout<<"Name:"<<h1.getname()<<"\n";
	cout<<"salary:"<<h1.getsalary()<<"\n";
	cout<<"Commission:"<<h1.getcommision()<<"\n";
	return 0;
}