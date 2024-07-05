#include<iostream>
using namespace std;
class MyArry{
	int size;
	int index;
	int* ptr;
	public:
	MyArry(int);
	bool isEmpty();
	bool isFull();
	void addEle(int);
	~MyArry();
};