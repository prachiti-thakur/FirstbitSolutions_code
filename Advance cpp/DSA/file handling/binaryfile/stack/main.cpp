#include <iostream>
using namespace std;
#include<stack>
#include"Stack.cpp"
int main(){
	/*
	stack<int> a;
	a.push(10);//void push(int)
	a.push(20);
	cout<<a.top();// reference top()
	*/
	Stack<int> a;
	a.display();
	a.push(20);
	a.push(30);
	/*
	Stack<double> b;
	b.push(11.33);
	b.push(40.55);
	b.display();
	*/
	return 0;
}