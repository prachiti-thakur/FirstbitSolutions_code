#include"emp.h"
Emp::Emp(){
	this->eid=0;
	strcpy(this->name,"name");
	this->salary=0;
}
Emp::Emp(int id,char* nm,double salary){
	this->eid=id;
	strcpy(this->name,nm);
	this->salary=salary;
	
}
void Emp::setid(int eid){
	this->eid=eid;
}
void Emp::setname(char* nm){
	strcpy(this->name,nm);
}
void Emp::setSalary(double salary){
	this->salary=salary;
}
int Emp::getid(){
	return this->eid;
}
char* Emp::getName(){
	return this->name;
}
double Emp::getDouble(){
	return  this->salary;
}
void Emp::display(){
	cout<<"id:"<<this->eid<<"\n";
	cout<<"Name:"<<this->name<<"\n";
	cout<<"salary:"<<this->salary<<"\n";
}