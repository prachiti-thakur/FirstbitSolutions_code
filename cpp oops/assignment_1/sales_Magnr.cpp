//sales manager
#include<stdio.h>
#include<string.h>
struct sales_M{
	int id;
	char name[20];
	double salary;
	double incentive;
	double target;
	//setters
	void setid(int id){
		//this->id=i;
		//id=i;
		this->id=id;
	}
	void setname(const char* nm){ //nm const nhi hai jiska address store kar rhe uski value const
		strcpy(this->name,nm);
		//nm[0]='T';  18	[Error] assignment of read-only location '* nm'
		
		
	}
	void setSalary(double s){
		//this->salary=s 
		salary=s;//this will gives error when both variable names are same ->id=id -->to avoid conflict we write this->id=id;
	}
	void setIncentive(double i){
		this->incentive=i;
	}
	void setTarget(double t){
		this->target=t;
	}
	void display(){
		printf("Id:%d\n",this->id);
		printf("name:%s\n",this->name);
		printf("salary:%lf\n",this->salary);
		printf("incentive:%lf\n",this->incentive);
		printf("Target:%lf\n",this->target);
	}
	
	
	//this->id=i
	//this pointer is implicitly works
	//id=i //works
	//but -->this->id=id
	//id=id -->but here id and id are same so to differentiate both  we write "this pointer"
	//complier gives error-->conflicts with variable declaration
};
int main(){
	sales_M s1;
	s1.setid(102);
	s1.setname("Prachiti");
	s1.setSalary(45000);
	s1.setIncentive(5000);
	s1.setTarget(200);
	s1.display();
	return 0;
}