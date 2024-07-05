//hr
#include<stdio.h>
#include<string.h>
struct Hr{
	int id;
	char name[20];
	double salary;
	double commission;
	
	void setId(int a){
		this->id=a;
	}
	void setName(const char* nm){
		strcpy(this->name,nm);
	}
	void setSalary(double s){
		this->salary=s;
	}
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
	int getid(){
		return this->id;
	}
	char* getname(){
		return this->name;
	}
	
	double getsalary(){
		return this->salary;
	}
	
	double getcommision(){
		return this->commission;
	}
	
	//constructor
	Hr(){
		this->id=0;
		strcpy(this->name,"Not Given");
		this->salary=0;
		this->commission=0;
		printf("Constructor called\n");
	}
};

int main(){
	Hr h1;
	h1.display();
	h1.setId(103);
	// ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]-->const required when we pass the  hardcoded string as paramter                                                                                                                                                     
	h1.setName("prachiti");//here "prachiti" is store in dummy so in defination when we catch  the address that point varible shouble be constant "Prachiti" pointer jyala point kart ahe ti value constant asli pahije //complier saying that dont change the address
	h1.setSalary(200000);
	h1.setCommission(5000);
	//h1.display();
	
	printf("ID:%d\n",h1.getid());
	printf("Name:%s\n",h1.getname());
	printf("salary:%.2lf\n",h1.getsalary());
	printf("Commission:%2.lf\n",h1.getcommision());
	return 0;
}