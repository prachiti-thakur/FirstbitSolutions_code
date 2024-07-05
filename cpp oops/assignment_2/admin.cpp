//admin
#include<stdio.h>
#include<string.h>
struct admin{
	int id;
	//char name[20];
	char* name;
	double salary;
	double allowance;
	
	void setId(int a){
		this->id=a;
	}
	void setName(char* nm){
		//strcpy(this->name,nm);
		name=nm;
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
};
int main(){
	admin a1;
	a1.display();
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
	
	printf("Id:%d\n",a1.getid());
	printf("name:%s\n",a1.getname());
	printf("Salary:%2.lf\n",a1.getsalary());
	printf("Allowance:%2.lf\n",a1.getallowance());
	return 0;
}