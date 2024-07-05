//student
#include<stdio.h>
#include<string.h>
//declaration of struc

struct student{
	int roll_no;
	char name[20];
	int marks;
};


void main(){
	struct student s;
	
	s.roll_no=10;
	strcpy(s.name,"prachiti");
	s.marks=45;
	
	printf("s.roll:%d\n",s.roll_no);
	printf("s.name:%s\n",s.name);
	printf("s.marks:%d\n",s.marks);
	
	printf("\nn");
	//taking values from user
	printf("enter the values\n\n");
	
	printf("roll no:");
	scanf("%d",&s.roll_no);
	
	fflush(stdin);
	printf("name:");
	scanf("%s",&s.name);
	
	printf("marks:");
	scanf("%d",&s.marks);
	
	printf("\n\n");
	
	printf("s.roll:%d\n",s.roll_no);
	printf("s.name:%s\n",s.name);
	printf("s.marks:%d\n",s.marks);
	
	//arry of structure student
	
	
		struct student s1[20];
		
		//taking values from array
		//take the n =>how many elements  wants to enter
		int n;
		printf("\n\nEnter the N:");
		scanf("%d",&n);
		
		for(int i=0;i<n;i++){
			printf("rollno:");
			scanf("%d",&s1[i].roll_no);
			
			fflush(stdin);
			printf("name:");
			scanf("%s",&s1[i].name);
			
			printf("marks:");
			scanf("%d",&s1[i].marks);
			
			printf("\n\n");
			
		}
		
		//printing
		for(int i=0;i<n;i++){
			printf("Roll no:%d\n",s1[i].roll_no);
			printf("Name:%s\n",s1[i].name);
			printf("marks:%d\n",s1[i].marks);
			printf("\n\n");
		}
		
		
	
	
}