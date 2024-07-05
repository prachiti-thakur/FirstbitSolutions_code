//admin ->id ,name,salary,allowance

#include<stdio.h>
#include<string.h>

struct admin{
	int id;
	char name[20];
	double salary;
	double allowance;
};

void main(){
	struct admin ad;
	
	ad.id=10;
	strcpy(ad.name,"prachiti");
	ad.salary=1200;
	ad.allowance=400;
	
	//print
	printf("id:%d\n",ad.id);
	printf("name:%s\n",ad.name);
	printf("salary:%lf\n",ad.salary);
	printf("allowance:%lf\n",ad.allowance);
	
	////array
	struct admin adm[10];
	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	
	//take values from user
	
	printf("Enter the values:\n");
	
	for(int i=0;i<n;i++){
		printf("id:");
		scanf("%d",&adm[i].id);
		
		fflush(stdin);
		printf("name:");
		scanf("%s",&adm[i].name);
		
		printf("salary:");
		scanf("%lf",&adm[i].salary);
		
		printf("allowance:");
		scanf("%lf",&adm[i].allowance);
		
		printf("\n\n");
		
	}//end of for loop
	
	
	//print
	printf("admin:\n\n");
	for(int i=0;i<n;i++){
		printf("id:%d\n",adm[i].id);
		printf("name:%s\n",adm[i].name);
		printf("salary:%lf\n",adm[i].salary);
		printf("allowance:%lf\n",adm[i].allowance);
		printf("\n\n");
	}
	

}