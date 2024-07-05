//HR (id, name, salary, commission)

#include<stdio.h>
#include<string.h>
struct Hr{
	int id;
	char name[20];
	double salary;
	double commission;
	
};

void main(){
	
	struct Hr h;
	
	h.id=1;
	strcpy(h.name,"prachiti");
	h.salary=1000;
	h.commission=4200;
	
	//print
	printf("id:%d\n",h.id);
	printf("name:%s\n",h.name);
	printf("salary:%lf\n",h.salary);
	printf("commission:%lf\n",h.commission);
	
	//array
	struct Hr h1[10];
	
	//take values from user 
	
	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("id:");
		scanf("%d",&h1[i].id);
		printf("name:");
		scanf("%s",&h1[i].name);
		printf("salary:");
		scanf("%lf",&h1[i].salary);
		printf("commission:");
		scanf("%lf",&h1[i].commission);
		printf("\n\n");
	}//end
	
	//print
	printf("Hr\n\n");
	for(int i=0;i<n;i++){
		
		printf("id:%d\n",h1[i].id);
		printf("name:%s\n",h1[i].name);
		printf("salary:%lf\n",h1[i].salary);
		printf("commission:%lf\n",h1[i].commission);
		printf("\n\n");
	}
}