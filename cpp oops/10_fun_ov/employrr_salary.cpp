//total_salary_employee
#include<stdio.h>
#include<string.h>
struct Hr{
	int id;
	char name[20];
	double salary;
	double commission;
	double total;
	
	Hr(){
		printf("\nDefault constructor called!!\n");
		this->id=0;
		strcpy(this->name,"Employee");
		this->salary=0;
		this->total=0;
	}
	
	Hr(int i,char* nm,double s,double c){
		printf("\nparameterise constructor called!!\n");
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->commission=c;
		this->total=0;
	}
	
	
	void setId(int i){
		this->id=i;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setSalary(double s){
		this->salary=s;
	}
	void setComi(double c){
		this->commission=c;
	}
	
	void setTotal(double t){
		this->total=t;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return this->salary;
	}
	
	double getCom(){
		return this->commission;
	}
	
	double getTotal(){
		return this->total;
	}
	
	void display(){
		printf("\nHR:\n");
		printf("Name:%s\n",this->name);
		printf("salary%lf\n",this->salary);
		printf("Commission:%lf\n",this->commission);
		printf("Total_salary:%lf\n",this->total);
	}
};
struct admin{
	
	int id;
	char name[20];
	double salary;
	double allowance;
	double total;
	
	admin(){
		printf("\nDefault constructor called!!\n");
		this->id=0;
		strcpy(this->name,"Employee");
		this->allowance=0;
		this->total=0;
	}
	
	admin(int i,char* nm,double s,double c){
		printf("\nparameterise constructor called!!\n");
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->allowance=c;
		this->total=0;
	}
	
	
	void setId(int i){
		this->id=i;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setSalary(double s){
		this->salary=s;
	}
	void setAllo(double a){
		this->allowance=a;
	}
	
	void setTotal(double t){
		this->total=t;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return this->salary;
	}
	
	double getAllow(){
		return this->allowance;
	}
	
	double getTotal(){
		return this->total;
	}
	
	void display(){
		printf("\nAdmin:\n");
		printf("Name:%s\n",this->name);
		printf("salary%lf\n",this->salary);
		printf("allowance:%lf\n",this->allowance);
		printf("Total_salary:%lf\n",this->total);
	}
	
};

struct SalesM{
		int id;
	char name[20];
	double salary;
	double incentive;
	int target;
	double total;
	
	SalesM(){
		printf("\nDefault constructor called!!\n");
		this->id=0;
		strcpy(this->name,"Employee");
		this->incentive=0;
		this->target=0;
		this->total=0;
	}
	
	SalesM(int i,char* nm,double s,double inc,int t){
		printf("\nparameterise constructor called!!\n");
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->incentive=inc;
		this->target=t;
		this->total=0;
	}
	
	
	void setId(int i){
		this->id=i;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setSalary(double s){
		this->salary=s;
	}
	void setInc(double inc){
		this->incentive=inc;
	}
	void setTarget(int t)
	{
		this->target=t;
	}
	void setTotal(double t){
		this->total=t;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return this->salary;
	}
	
	double getInc(){
		return this->incentive;
	}
	
	double getTarget(){
		return this->target;
	}
	double getTotal(){
		return this->total;
	}
	
	void display(){
		printf("\nSales_Manager:\n");
		printf("Name:%s\n",this->name);
		printf("salary%lf\n",this->salary);
		printf("incentive:%lf\n",this->incentive);
		printf("Target:%d\n",this->target);
		printf("Total_salary:%lf\n",this->total);
	}
};

struct Salary{
	Hr totalsalary(Hr h){
		double total;
		total=h.getSalary()+h.getCom();
		h.setTotal(total);
		
		return h;
	}
	
	admin totalsalary(admin a){
		double total;
		total=a.getSalary()+a.getAllow();
		a.setTotal(total);
		
		return a;
	}
	
	double totalsalary(SalesM m){
		double total;
		total=m.getSalary()+m.getInc();
		return total;
	}

};

int main(){
	int choice;
	
	do{
		printf("\n\n0.Exit\n1.Hr\n2.Admin\n3.Sales_Manager\n");
		printf("Enter choice:\n");
		scanf("%d",&choice);
		//obj cret
		Salary s;
		switch(choice)
		{
			case 1:
				{
						Hr h(101,"Prachiti",12000,400);
						h.display();
						h=s.totalsalary(h);
						printf("\nAfter calculating total salary:\n");
						h.display();
					break;
				}
			case 2:{
						admin a(102,"hrutu",45000,500);
						a.display();
						a=s.totalsalary(a);
						printf("\nAfter calculating total salary:\n");
						a.display();
				
					break;
			}
			case 3:{
							SalesM m(104,"pravin",50000,400,20);
							m.display();
							double t=s.totalsalary(m);
							m.setTotal(t);
							printf("\nAfter calculating total salary:\n");
							m.display();
	
				
					break;
			}
			case 0:{
				printf("\nThank you for visit!!\n");
				break;
			}
			default:
				{
					printf("\nInvalid Input!!\n");
					break;
				}
		}
	}while(choice!=0);
	
	return 0;
}
/*
int main(){
	
	Salary s;
	
	Hr h(101,"Prachiti",12000,400);
	h.display();
	h=s.totalsalary(h);
	printf("\nAfter calculating total salary:\n");
	h.display();
	
	admin a(102,"hrutu",45000,500);
	a.display();
	a=s.totalsalary(a);
	printf("\nAfter calculating total salary:\n");
	a.display();
	
	SalesM m(104,"pravin",50000,400,20);
	m.display();
	double t=s.totalsalary(m);
	m.setTotal(t);
	printf("\nAfter calculating total salary:\n");
	m.display();
	
	
	return 0;
}*/