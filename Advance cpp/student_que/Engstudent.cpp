#include<Engstudent.h>

EngStu::EngStu(){
	strcpy(this->branch,"ENg");
	this->internal_Marks=0;
}
EngStu::EngStu(int i,char* nm,double marks,char* branch,double inter_m):student(i,nm,marks){
	strcpy(this->branch,branch);
	this->internal_Marks=inter_m;
}
void EngStu::setBranch(char* branch){
	strcpy(this->brach,branch);	
}
void EngStu::setInternalMarks(double m){
	this->internal_Marks=m;
}
char* EngStu::getBranch(){
	return this->branch;
}
double EngStu::getInternalMarks(){
	return this->internal_Marks;
}