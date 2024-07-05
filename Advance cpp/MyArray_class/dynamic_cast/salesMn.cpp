#include "salesM.h"
SalesM::SalesM(){
	this->incentive=0;
	this->target=0;
}
SalesM::SalesM(int i,char* nm,double s,double inc,int t):Employee(i,nm,s){
	this->incentive=inc;
	this->target=t;
}
double SalesM::getIncentive(){
	return this->incentive;
}
void SalesM::setIncentive(double i){
	this->incentive=i;
}
void SalesM::setTarget(int t){
	this->target=t;
}
int SalesM::getTarget(){
	return this->target;
}
void SalesM::display(){
	cout<<"SaleManager:\n";
	Employee::display();
	cout<<"Incentive:"<<this->incentive<<"\n";
	cout<<"Targets;"<<this->target<<"\n";
}
//global
ostream& operator<<(ostream& o,SalesM& h){
	o<<"SalesManager:\n";
	o<<"Id:"<<h.getid()<<"\n";
	o<<"name:"<<h.getname()<<"\n";
	o<<"Salary"<<h.getsalary()<<"\n";
	o<<"Incentive:"<<h.getIncentive()<<"\n";
	o<<"Target"<<h.getTarget()<<"\n";
	o<<"---------------------------------------\n"
	return o;
}