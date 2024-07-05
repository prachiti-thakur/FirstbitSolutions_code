#include "emp.h"
#include "hrh.h"
hr::hr():Employee()	{
	this->commission=0;
}
hr::hr(int i,char* nm,double s,double c):Employee(i,nm,s){
	this->commission=c;
}
void hr::setCommission(double c){
		this->commission=c;
}
double hr::getCommission(){
	return this->commission;
}
void hr::display(){
	cout<<"Hr:\n";
	Employee::display();
	cout<<"Commission:"<<this->commission<<"\n";
}

ostream& operator<<(ostream& o,hr& h){
	o<<"\nHR;\n";
	o<<"id:"<<h.getid()<<"\n";
	o<<"name:"<<h.getname()<<"\n";
	o<<"salary:"<<h.getsalary()<<"\n";
	o<<"Commision:"<<h.getCommission()<<"\n";
	o<<"---------------------------------------\n"
	
	return o;
}