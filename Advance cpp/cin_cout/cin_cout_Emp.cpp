//cin cout
#include<iostream>
using namespace std;
class Employee{
	int id;
	char name[10];
	double price;
	public:
		Employee(){
			cout<<"default constructor of Emp \n";
			this->id=0;
			strcpy(this->name,"Employee");
			this->price=0;
		}
		Employee(int i,char* emp,double p){
			cout<<"parameterised constructor of Emp\n";
			this->id=i;
			strcpy(this->name,emp);
			this->price=p;
		}
		void setid(int i){
			this->id=i;
		}
		void setname(char* emp){
			strcpy(this->name,emp);
		}
		void setprice(double p){
			this->price=p;
		}
		
		int getid(){
			return this->id;
		}
		
		char* getname(){
			return this->name;
		}
		
		double getprice(){
			return this->price;
		}
		
};

ostream& operator<<(ostream&,Employee&);
istream& operator>>(istream&,Employee&);
int main(){
	Employee e1;
	cin>>e1;
	cout<<e1;
	return 0;
}

//definations of golbal func
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