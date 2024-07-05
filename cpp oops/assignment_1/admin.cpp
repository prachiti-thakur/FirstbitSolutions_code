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
};
int main(){
	admin a1;
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
	a1.display();
	return 0;
}