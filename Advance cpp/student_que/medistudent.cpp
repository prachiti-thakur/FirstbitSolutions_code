#include"medistudent.h"

MediStu::MediStu(){
	strcpy(this->speci,"Medi");
	this->internshipMarks=0;
}
MediStu::MediStu(int i,char* nm,double marks,char* spi,double intr_m):student(i,nm,marks){
	strcpy(this->speci,spi);
	this->internshipMarks=intr_m;
}
void MediStu::setSpeci(char* spi){
	strcpy(this->speci,spi);
}
void MediStu::getIntM(double intr_m){
	this->internshipMarks=intr_m;
}
char* MediStu::getSpeci(){
	return this->speci;
}
double MediStu::getIntM(){
	this->internshipMarks;
}