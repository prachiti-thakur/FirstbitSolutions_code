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
		printf("Roll No :%d\n",this->roll_no);
		printf("Name :%s\n",this->name);
		printf("Marks :%lf\n",this->marks);		
	}
};
int main(){
	student s1;
	s1.setRollNo(1);//setRollNo(&s1,1)
	s1.setname("Prachiti");//setname(&s1,"Prachiti")
	s1.setMarks(4500);//setMarks(&s1,4500);
	s1.display();//display(&s1);
	return 0;
}