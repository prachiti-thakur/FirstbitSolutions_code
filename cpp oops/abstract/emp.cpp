//Q1 calculate Basic salary 
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct employee{
	int id;
	char name[20];
	double salary;
	
	void setid(int a){
		this->id=a;
	}
	void setname(char* nm){
		strcpy(this->name,nm);
	}
	void setsalary(double s){
		this->salary=s;
	}
	virtual void display(){
		cout<<"id:"<<this->id<<"\n";
		cout<<"Name :"<<this->name<<"\n";
		cout<<"Salary:"<<this->salary<<"\n";
		
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
	
	//constructor
	employee(){
		cout<<"\nDefault Constructor of employee called\n";
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		
	}
	//parameterised constructor
	employee(int i,char* nm,double s){
		cout<<"\nParameterised constructor of employee called\n";
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		
	}
	
	virtual double tocalculate()=0;
	
	
};//emp ends here

struct sales_M :public employee{//:public -->is a relationship (imp part of inheri)

	double incentive;
	double target;


	void setIncentive(double i){
		this->incentive=i;
	}
	void setTarget(double t){
		this->target=t;
	}
	void display(){
		employee::display();
		cout<<"incentive:"<<this->incentive<<"\n";
		cout<<"Target:"<<this->target<<"\n";
	}
	
	double getincentive(){
		return this->incentive;
	}
	
	double gettarget(){
		return this->target;
	}
	
	//constructor
	sales_M():employee(){
		this->id=0;
		strcpy(this->name,"not Given");
		this->salary=0;
		this->incentive=0;
		this->salary=0;
		cout<<"default Constructor  of sales Manager called\n";
}

//parameterised constructor
	sales_M(int i,char* nm,double s,double inc,double t):employee(i,nm,s){
		//parameter initialization list //emp para called explicitly
		this->incentive=inc;
		this->target=t;
	cout<<"Parameterised constructor sales Manager called\n";
	}
	
	double tocalculate(){
		double t=this->incentive+employee::getsalary();
		//printf("t:%lf\n",t);
		return t;
	}
	
};//salesmanager ends here

struct Hr:public employee{
	double commission;
	
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
	
	double getcommision(){
		return this->commission;
	}
	
	//constructor
	Hr():employee(){
		//here it based class constructor gets call by default 
		this->commission=0;
		cout<<" default Constructor HR called\n";
	}
	//parameterised constructor
	Hr(int i,char* nm,double s,double c):employee(i,nm,s) //parameter initialization list
	{//needs to call it emplicitly
		this->commission=c;
		cout<<"Parameterised constructor HR called\n";
	}
	
	
	double tocalculate(){
		double t=this->commission+employee::getsalary();
	//	printf("t:%lf\n",t);
		return t;
	}
};
//hr ends here
struct admin:public employee{
	
	double allowance;
	
	void SetAllowance(double al){
		this->allowance=al;
	}
	
	void display(){
	
		employee::display();
		printf("allowance:%lf\n",this->allowance);
	}
	
	//getters
	
	
	double getallowance(){
		return this->allowance;
	}
	
	//constructor
	admin(){
		this->allowance=0;
		cout<<" default  Constructor Admin called\n";
	}
	//parameterised constructor
	admin(int i, char* nm,double s,double a):employee(i,nm,s)
	{
		this->allowance=a;
		cout<<"Parameterised constructor Admin called\n";
	}
	
		double tocalculate(){
			double t=this->allowance+employee::getsalary();
		//	printf("t:%lf\n",t);
			return t;
	}
};
int main(){
	employee* ep;
	Hr h1(101,(char*)"Prachiti",80000,5000);
	ep=&h1;
	ep->display();
	double total=ep->tocalculate();
	printf("Total salary of hr:%lf\n",total);
	
	sales_M s1(101,"Prachiti",80000,6000,6);
	ep=&s1;
	ep->display();
	total=ep->tocalculate();
	printf("Total salary of hr:%lf\n",total);
	
	admin a1(101,"Prachiti",80000,7000);
	ep=&a1;
	ep->display();
	total=ep->tocalculate();
	printf("Total salary of hr:%lf\n",total);
	return 0;
}