//employee
#include<stdio.h>
#include<string.h>
//declaration of structure
struct emp{
	int id;
	char name[20];
	double salary;
};

void main(){
	
	struct emp e1;
	
	printf("Enter the values:\n\n");
	
	printf("Id:");
	scanf("%d",&e1);
	
	fflush(stdin);
	printf("name:");
	scanf("%s",&e1.name);
	
	printf("salary:");
	scanf("%lf",&e1.salary);
	
	///print values
	printf("\n");
	printf("id:%d\n",e1.id);
	printf("name:%s\n",e1.name);
	printf("salary:%lf\n",e1.salary);
	
	
	//create array of emp
	
	struct emp e2[10];
	
	//take n
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	//fill the arrry
	printf("Enter the values:\n\n");
	
	for(int i=0;i<n;i++){
		printf("ID:");
		scanf("%d",&e2[i].id);
		
		fflush(stdin);
		printf("name:");
		scanf("%s",&e2[i].name);
		
		printf("salary:");
		scanf("%lf",&e2[i].salary);
		
		printf("\n\n");
	}
	
	
	//printing 
	printf("Employees:\n\n");
	
	for(int i=0;i<n;i++){
		printf("id:%d\n",e2[i].id);
		printf("name:%s\n",e2[i].name);
		printf("salary:lf\n\n",e2[i].salary);
		printf("\n\n");
	}
		
}