//structure array pass to function
#include<stdio.h>
//void store_std(struct student);
//void dis_student(struct student);

struct student {
	int rollno;
	char name[20];
	int marks;
};

struct store_std(struct student);
void dis_student(struct student);

void main(){
	struct student s1;
	
	s1=store_std(s1);
	dis_student(s1);
	
}

struct student store_std(struct student s){
	printf("stdent Info:\n");
	printf("roll_no:");
	scanf("%d",&s.rollno);
	printf("name:");
	scanf("%s",&s.name);
	printf("marks:");
	scanf("%d",&s.marks);
	printf("\n\n");
	
	return s;
}

void dis_student(struct student s){
	printf("Id:%d\n",s.rollno);
	printf("name:%s\n",s.name);
	printf("marks:%d\n",s.marks);
}