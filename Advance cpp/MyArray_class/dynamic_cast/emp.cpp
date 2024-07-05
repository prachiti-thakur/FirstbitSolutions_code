#include"emp.h"
Employee::Employee(){
	
}
Employee::Employee(int i,char* nm,double s){
	this->id=i;
	strcpy(this->name,nm);
	this->salary=s;
}
void Employee::setid(int i){
	this->id=i;
}
void Employee::setname(char*nm){
	strcpy(this->name,nm);
}
void Employee::setsalary(double s){
	this->salary=s;
}

int Employee::getid(){
	return this->id;
}
char* Employee::getname(){
	return this->name;
}
double Employee::getsalary(){
	return this->salary;
}

void Employee::display(){
	cout<<"Employee:\n";
	cout<<"id:"<<this->id<<"\n";
	cout<<"name:"<<this->name<<"\n";
	cout<<"salary:"<<this->salary<<"\n";
}
ostream& operator<<(ostream& o,Employee& e){
	o<<"Employer;\n";
	o<<"id:"<<e.getid()<<"\n";
	o<<"name:"<<e.getname()<<"\n";
	o<<"salary:"<<e.getsalary()<<"\n";
	o<<"---------------------------------------\n"
	return o;
}