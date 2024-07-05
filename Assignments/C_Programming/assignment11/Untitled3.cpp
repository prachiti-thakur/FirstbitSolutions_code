//SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
#include<string.h>

struct SM{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
};

void main(){
	
	struct SM s;
	
	s.id=1;
	strcpy(s.name,"prachiti");
	s.salary=4500;
	s.incentive=450;
	s.target=4;
	
	//print
	printf("id: %d\n",s.id);
	printf("name:%s\n",s.name);
	printf("salary:%lf",s.salary);
	printf("incentive:%lf",s.incentive);
	printf("target:%d",s.target);
}