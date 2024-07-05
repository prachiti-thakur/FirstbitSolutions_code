//department
#include<stdio.h>
struct Department {
	int noOfTeachers;
	int noOfStudents;
	int noOFclassrooms;
	
	Department(){
		printf("Default constructor of Department\n");
		this->noOfTeachers=0;
		this->noOfStudents=0;
		this->noOFclassrooms=0;
	}
	Department(int t,int s,int c){
		printf(" Parameterised constructor of Department\n");
		this->noOfTeachers=t;
		this->noOfStudents=s;
		this->noOFclassrooms=c;
	}
	
	void setNoOfTeches(int t){
		this->noOfTeachers=t;
	}
	void setNoOfStudent(int s){
		this->noOfStudents=s;
	}
	void setNoOfclassrooms(int c){
		this->noOFclassrooms=c;
	}
	
	int getNoOfTeacher(){
		return this->noOfTeachers;
	}
	int getNoOfClassrooms(){
		return this->noOFclassrooms;
	}
	int getNoOfStudents(){
		return this->noOfStudents;
	}
	
	void display(){
		printf("No of Teachers:%d\n",this->noOfTeachers);
		printf("No of classroom :%d\n",this->noOFclassrooms);
		printf("No of Students:%d\n",this->noOfStudents);
	}
};
struct IT:public Department{
	int NoOfLabs;
	int NoOfComputers;
	
	IT(){
		printf("Default constructor of IT\n");
		this->NoOfLabs=0;
		this->NoOfComputers=0;
	}
		IT(int tea,int stu,int cls,int labs,int com):Department(tea,stu,cls){
		printf("Parameterised constructor of IT\n");
		this->NoOfLabs=labs;
		this->NoOfComputers=com;
	}
	void setNoOfLabs(int lab){
		this->NoOfLabs=lab;
	}
	void setNoOfComputers(int com){
		this->NoOfComputers=com;
	}
	
	int getNoOfLabs(){
		return this->NoOfLabs;
	}
	
	int getNoOfComputers()
	{
		return this->NoOfComputers;
	}
	void display(){
		Department::display();
		printf("No of labs:%d\n",this->NoOfLabs);
		printf("No of computer:%d\n",this->NoOfComputers);
	}
	
	
};//IT ends here
struct Civil:public Department{
	int NoOfWorkshops;
	int NoOfMachines;
	Civil(){
		printf("Default constructor of Civil\n");
		this->NoOfWorkshops=0;
		this->NoOfMachines=0;
	}
		Civil(int tea,int stu,int cls,int works,int machines):Department(tea,stu,cls){
		printf("Default constructor of Civil\n");
		this->NoOfWorkshops=works;
		this->NoOfMachines=machines;
	}
	void setWorkshops(int work){
		this->NoOfWorkshops=work;
	}
	void setMachines(int machine){
		this->NoOfMachines=machine;
	}
	int getWorkshops(){
		return this->NoOfWorkshops;
	}
	int getMachine(){
		return this->NoOfMachines;
	}
	void display(){
		Department::display();
		printf("No of workshops:%d\n",this->NoOfWorkshops);
		printf("No of Machines:%d\n",this->NoOfMachines);
	}
};
int main(){
	//based class
	Department d1;
	Department d2(50,89,90);
	d2.display();
	//derived class
	IT DiT;
	IT  DiT2(45,56,23,4,50);
	DiT2.display();
	
	Civil c1;
	Civil c2(46,79,45,4,56);
	c2.display();
	
	return 0;
}