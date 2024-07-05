#include<iostream>
using namespace std;
class student{
	public:
	int roll=188;
	//const int marks=112;
	student(){
		this->roll=0;
		this->marks=123;
	}
	
	student(int r){
		this->roll=0;
		this->marks=3333;
	}
	
};
class test:public student{
	
};

int main(){
	test t;
	cout<<t.marks;
	return 0;
}

/*
[Error] assignment of read-only member 'student::marks'
*/