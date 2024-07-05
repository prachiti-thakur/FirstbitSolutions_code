#include"Engstudent.h"
#include"medistudent.h"
class College{
	///create the array 
	static Student** std;//going to store the arry of student pointers
	static int cnt;//to maintain the count of fill array
	int size;//size of array
	public:
	College(int);
	static student** getStudent();
	static int getCnt();
	
	
};