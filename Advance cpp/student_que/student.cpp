#include "student.h"
Student::Student(){
	this->id=0;
	strcpy(this->name,"Student");
	this->marks=0;
}
Student::Student(int i,char* nm,double m){
	this->id=i;
	strcpy(this->name,nm);
	this->marks=m;
}
void Student::setId(int i) {
	this->id=i;
}
void Student::setName(char* nm){
	strcpy(this->name,nm);
}
void Student::marks(double m){
	this->marks=m;
}
int Student::getID(){
	return this->id;
}
char* Student::getName(){
	return this->name;
}
double Student::getMarks(){
	return this->marks;
}