#include"student.h"
class MediStu{
	char speci[20];
	double internshipMarks;
	public:
	MediStu();
	MediStu(int,char*,double,char*,double);
	void setSpeci(char*);
	void getIntM(double);
	char* getSpeci();
	double getIntM();
		
};