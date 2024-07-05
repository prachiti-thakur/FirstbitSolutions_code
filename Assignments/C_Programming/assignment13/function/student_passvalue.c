#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	int marks;
};

//declaration
struct student store(struct student*);
void display(struct student);

//
void main(){
	struct student s;
	
	//s=store();
	s=store(&s);
	display(s);
	
}

//defination

//pass by address(pointer to structure ->)
struct student store(struct student* s){
	//struct student s;
	printf("Enter values:\n");
	printf("roll_no:");
	//scanf("%d",&(*s).rollno);
	scanf("%d",&s->rollno);
	
	fflush(stdin);
	printf("name:");
	//scanf("%s",(*s).name);
	scanf("%s",s->name);
	
	printf("marks:");
	//scanf("%d",&(*s).marks);
	scanf("%d",s->marks);
	//returning the student 
	return (*s);
	
}

void display(struct student s){
	printf("student:\n");
	printf("%d\n",s.rollno);
	printf("%s\n",s.name);
	printf("%d\n",s.marks);
}

/*

struct student store(){
	struct student s;
	printf("Enter values:\n");
	printf("roll_no:");
	scanf("%d",&s.rollno);
	
	fflush(stdin);
	printf("name:");
	scanf("%s",&s.name);
	
	printf("marks:");
	scanf("%d",&s.marks);
	
	return s;
	
}
*/

/*
strcture pass by value
struct student store(struct student s){
	//struct student s;
	printf("Enter values:\n");
	printf("roll_no:");
	scanf("%d",&s.rollno);
	
	fflush(stdin);
	printf("name:");
	scanf("%s",&s.name);
	
	printf("marks:");
	scanf("%d",&s.marks);
	
	return s;
	
}

*/

