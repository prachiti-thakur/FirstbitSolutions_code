//employee
#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[20];
	double salary;
	//this == represents address of current invoke object
	//setters
	void setid(int a){
		this->id=a;
	}
	void setname(char* nm){
		strcpy(this->name,nm);
	}
	void setsalary(double s){
		this->salary=s;
	}
	void display(){
		printf("id:%d\n",this->id);
		printf("Name :%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
		
	}
};
int main(){
	employee e1;
	e1.setid(101);
	e1.setname("Hrutu");
	e1.setsalary(20000);
	e1.display();
	return 0;
}
