#include<stdio.h>
#include<string.h>
struct student{
	int roll_no;
	char name[20];
	double marks;
	
	//setters
	void setRollNo(int r){
		this->roll_no=r;
	}
	void setname(char* nm){
		strcpy(this->name,nm);
	}
	void setMarks(double m){
		this->marks=m;
	}
	void display(){	
//		printf("Roll No :%d\n",this->roll_no);
//		printf("Name :%s\n",this->name);
//		printf("Marks :%lf\n",this->marks);	

	printf("Roll No :%d\n",this->getrollno());
		printf("Name :%s\n",this->getname());
		printf("Marks :%lf\n",this->getMarks());		
	}
	
	//getters
	int getrollno(){
		return this->roll_no;
	}
	
	char* getname(){
		return this->name;
	}
	
	double getMarks(){
		return this->marks;
	}
	
	//constructor
	student(){
		this->roll_no=0;
		strcpy(this->name,"not given");
		this->marks=0;
		printf("Constructor called\n");
	}
	//parameterised constructor
	student(int r,char *nm,double m){
		this->roll_no=r;
		strcpy(this->name,nm);
		this->marks=m;
		printf("Parameterised constructor called\n");
	}
	
};
int main(){
	student s1;
	printf("s1\n");
	s1.display();
	student s2(3,"prachi",56);
	s2.display();
	s1.setRollNo(1);//setRollNo(&s1,1)
	s1.setname("Prachiti");//setname(&s1,"Prachiti")
	s1.setMarks(4500);//setMarks(&s1,4500);
	//s1.display();//display(&s1);
	//(by getters)
	printf("After setting values of s1 from setters:\n"); 
	
	printf("BY GETTERS\n");
   printf("roll_NO:%d\n",s1.getrollno());
   printf("name:%s\n",s1.getname());
   printf("Marks:%.2lf\n",s1.getMarks());
   
	return 0;
}