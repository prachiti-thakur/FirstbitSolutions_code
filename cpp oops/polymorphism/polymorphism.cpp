//polymorphism
//employee
#include<stdio.h>
#include<string.h>
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
		printf("id:%d\n",this->id);
		printf("Name :%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
		
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
		printf("\nDefault Constructor of employee called\n");
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
		
	}
	//parameterised constructor
	employee(int i,char* nm,double s){
		printf("\nParameterised constructor of employee called\n");
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		
	}
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
//		printf("Id:%d\n",this->id);
//		printf("name:%s\n",this->name);
//		printf("salary:%lf\n",this->salary);
//here we are rewriting instead of that we can reuse the display of emp
//to known to the complier that display function is of emp use scope resolution operator ::

		employee::display();
		printf("incentive:%lf\n",this->incentive);
		printf("Target:%lf\n",this->target);
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
		printf("default Constructor  of sales Manager called\n");
}

//parameterised constructor
	sales_M(int i,char* nm,double s,double inc,double t):employee(i,nm,s){
//		this->id=i;
//		strcpy(this->name,nm);
//		this->salary=s;
		//parameter initialization list //emp para called explicitly
		this->incentive=inc;
		this->target=t;
		printf("Parameterised constructor sales Manager called\n");
	}
	
};//salesmanager ends here

struct Hr:public employee{
	double commission;
	
	void setCommission(double c){
		this->commission=c;
	}
	void display(){
		printf("Id:%d\n",this->id);
		printf("name:%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
		printf("commission:%lf\n",this->commission);
	}
	//getters
	
	double getcommision(){
		return this->commission;
	}
	
	//constructor
	Hr():employee(){
		//here it based const gets call by default 
		this->commission=0;
		printf(" default Constructor HR called\n");
	}
	//parameterised constructor
	Hr(int i,char* nm,double s,double c):employee(i,nm,s) //parameter initialization list
	{//needs to call it emplicitly
		this->commission=c;
		printf("Parameterised constructor HR called\n");
	}
};
//hr ends here
struct admin:public employee{
	
	double allowance;
	
	void SetAllowance(double al){
		this->allowance=al;
	}
	
	void display(){
		//scope resolution operator
		//to reeuse the base class function
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
		printf(" default  Constructor Admin called\n");
	}
	//parameterised constructor
	admin(int i, char* nm,double s,double a):employee(i,nm,s)
	{
		this->allowance=a;
		printf("Parameterised constructor Admin called\n");
	}
};
int main_1(){
	sales_M s1;
	s1.display();
	s1.setid(101);//here we are reusing the setid of emp through sm's objects
	s1.display();
	
	sales_M s2(102,"prachiti",80000,600,7);
	s2.display();
	
	Hr h1;
	Hr h2(103,"prachi",5600,200);
	h2.display();
	
	admin a;
	admin a1(105,"shreya",9200,400);
	a1.display();
	return 0;
}


int main_2(){
	employee e1(101,"sachin",50000);
	employee* ep;
	ep=&e1;
	ep->display();
	
	sales_M s2(102,"prachiti",80000,600,7);
	sales_M* sp;
	sp=&s2;
	sp->display();
	
	Hr h2(103,"prachi",5600,200);
	Hr* hp;
	hp=&h2;
	hp->display();
	
	admin a1(105,"shreya",9200,400);
	admin* ap;
	ap=&a1;
	ap->display();
	
	
	return 0;
}
int main(){
	employee e1(101,"sachin",50000);
	employee* ep;
	ep=&e1;
	ep->display();
	
	sales_M s2(102,"prachiti",80000,600,7);
	
	ep=&s2;
	ep->display();
	
	Hr h2(103,"prachi",5600,200);
	ep=&h2;
	ep->display();
	
	admin a1(105,"shreya",9200,400);
	ep=&a1;
	ep->display();
	
	
	return 0;
}