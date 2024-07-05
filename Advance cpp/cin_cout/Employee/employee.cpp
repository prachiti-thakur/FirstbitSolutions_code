//
#include"employee.h"

		Employee::Employee(){
			cout<<"default constructor of Emp \n";
			this->id=0;
			strcpy(this->name,"Employee");
			this->price=0;
		}
		Employee::Employee(int i,char* emp,double p){
			cout<<"parameterised constructor of Emp\n";
			this->id=i;
			strcpy(this->name,emp);
			this->price=p;
		}
		void Employee::setid(int i){
			this->id=i;
		}
		void Employee::setname(char* emp){
			strcpy(this->name,emp);
		}
		void Employee::setprice(double p){
			this->price=p;
		}
		
		int Employee::getid(){
			return this->id;
		}
		
		char* Employee::getname(){
			return this->name;
		}
		
		double Employee::getprice(){
			return this->price;
		}
		
//global
ostream& operator<<(ostream& o,Employee& emp){
	
	o<<emp.getid()<<"\n";
	o<<emp.getname()<<"\n";
	o<<emp.getprice()<<"\n";
	
	return o;
}

istream& operator>>(istream& i,Employee& emp){
	int id;
	char name[20];
	double p;
	cout<<"id:";
	i>>id;
	cout<<"name:";
	i>>name;
	cout<<"price:";
	i>>p;
	emp.setid(id);
	emp.setname(name);
	emp.setprice(p);
	
	return i;
}
