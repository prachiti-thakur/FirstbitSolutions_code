#pragma once
#include"student.h"
class EngStu{
	char branch[20];
	double internal_Marks;
	
	public:
	EngStu();
	EngStu(int,char*,double,char*,double);
	void setBranch(char*);
	void setInternalMarks(double);
	char* getBranch();
	double getInternalMarks();
};