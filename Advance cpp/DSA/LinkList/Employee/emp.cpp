#include"employee.h"
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
	cout<<"\n-------------------------------------\n";
	cout<<"\nEmployee:\n";
	cout<<"id:"<<this->id<<"\n";
	cout<<"name:"<<this->name<<"\n";
	cout<<"salary:"<<this->salary<<"\n";
	cout<<"\n-------------------------------------\n";
}
/*
int Employee::operator==(Employee e){
	int cmp=strcasecmp(this->name,e.getname());
	if(cmp==0){
		cmp=1;
	}else{
		cmp=0;
	}
	
	if( (this->id==e.getid()) &&cmp && (this->salary==e.getsalary())){
		return 1;
	}
	else{
		return 0;
	}
}*/
ostream& operator<<(ostream& o,Employee& e){
	o<<"Employer:\n";
	o<<"id:"<<e.getid()<<"\n";
	o<<"name:"<<e.getname()<<"\n";
	o<<"salary:"<<e.getsalary()<<"\n";
	
	return o;
}


