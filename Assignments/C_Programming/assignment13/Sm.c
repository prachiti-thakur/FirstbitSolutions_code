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
	printf("salary:%lf\n",s.salary);
	printf("incentive:%lf\n",s.incentive);
	printf("target:%d\n",s.target);
	
	//array
	struct SM s1[10];
	
	int n;
	printf("\nEnter n:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("id:");
		scanf("%d",&s1[i].id);
		printf("name:");
		scanf("%s",&s1[i].name);
		printf("salary:");
		scanf("%lf",&s1[i].salary);
		printf("incentive:");
		scanf("%lf",&s1[i].incentive);
		printf("target:");
		scanf("%d",&s1[i].target);
		printf("\n\n");
		
	}//end for
	
	printf("Sales managers:\n\n");
	
	for(int i=0;i<n;i++){
		printf("id:%d\n",s1[i].id);
		printf("name:%s\n",s1[i].name);
		printf("salary:%lf\n",s1[i].salary);
		printf("incentive:%lf\n",s1[i].incentive);
		printf("targets:%d\n",s1[i].target);
		printf("\n\n");
	}//end
	
}