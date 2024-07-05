#include"admin.h"
Admin::Admin():Employee(){
	this->allowance=0;
}
Admin::Admin(int i,char* nm,double s,double a):Employee(i,nm,s){
	this->allowance=a;
}
void Admin::setAllowance(double a){
	this->allowance=a;
}

double Admin::getAllowance(){
	return this->allowance;
}

void Admin::display(){
	cout<<"Allowance:\n";	
	Employee::display();
	cout<<"Allowance:"<<this->allowance<<"\n";
}
