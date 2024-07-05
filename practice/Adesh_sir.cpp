#include<iostream>
using namespace std;
struct student{
	int roll=188;
	int marks=0;
	
	
};
struct test:public student{
	
};

int main(){
	test t;
	cout<<t.roll;
	return 0;
}