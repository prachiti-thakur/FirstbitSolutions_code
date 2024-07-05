//admin
#include<stdio.h>
#include<string.h>
struct admin{
	int id;
	char name[20];
	//char* name;
	double salary;
	double allowance;
	
	void setId(int a){
		this->id=a;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
		//name=nm; when name is the pointer not char array can assign address to address
	}
	void setSalary(double s){
		this->salary=s;
	}
	void SetAllowance(double al){
		this->allowance=al;
	}
	
	void display(){
		printf("Id:%d\n",this->id);
		printf("name:%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
		printf("allowance:%lf\n",this->allowance);
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
	
	double getallowance(){
		return this->allowance;
	}
	
	//constructor
	admin(){
		this->id=0;
		strcpy(this->name,"Not Given\n");
		this->salary=0;
		this->allowance=0;
		printf("Constructor called\n");
	}
	//parameterised constructor
	admin(int i, char* nm,double s,double a){
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->allowance=a;
		printf("Parameterised constructor called\n");
	}
};
int main(){
	admin a1;
	printf("a1\n");
	a1.display();
	
	admin a2(105,"shreya",4500,789);
	a2.display();
	int a;
	char name[20];
//char* name;-->not allowed size must be define
	double salary,allowance;
	
	printf("Enter Id:");
	scanf("%d",&a);
	
	fflush(stdin);
	printf("Enter name:");
	gets(name);
	
	printf("Enter Salary:");
	scanf("%lf",&salary);
	
	printf("Enter allowance:");
	scanf("%lf",&allowance);
	
	a1.setId(a);
	a1.setName(name);
	a1.setSalary(salary);
	a1.SetAllowance(allowance);
	//a1.display();
	printf("After setting values of a1 by setters:\n");
	printf("by getters print:\n");
	printf("Id:%d\n",a1.getid());
	printf("name:%s\n",a1.getname());
	printf("Salary:%2.lf\n",a1.getsalary());
	printf("Allowance:%2.lf\n",a1.getallowance());
	return 0;
}