#include<iostream>
#include"employee.h"
using namespace std;
class Node{
	Employee emp;
	Node* next;
	
	public:
	Node(Employee);
	void setEmp(Employee&);
	void setNext(Node*);
	Employee getEmp();
	Node* getNext();
	
};