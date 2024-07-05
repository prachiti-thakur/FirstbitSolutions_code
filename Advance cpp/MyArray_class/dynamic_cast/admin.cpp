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


ostream& operator<<(ostream& o,Admin& a){
	o<<"\nAdmin\n";
	o<<"id:"<<a.getid()<<"\n";
	o<<"name:"<<a.getname()<<"\n";
	o<<"salary:"<<a.getsalary()<<"\n";
	o<<"allowance:"<<a.getAllowance()<<"\n";
	o<<"---------------------------------------\n"
	return o;
}