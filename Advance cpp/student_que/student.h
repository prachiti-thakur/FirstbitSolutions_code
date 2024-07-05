#pragma once
#include<iostream>
using namespace std;
class Student{
	int id;
	char name[20];
	double marks;
	public:
	Student();
	Student(int,char*,double);
	void setId(int);
	void setName(char*);
	void marks(double m);
	int getID();
	char* getName();
	double getMarks();
};