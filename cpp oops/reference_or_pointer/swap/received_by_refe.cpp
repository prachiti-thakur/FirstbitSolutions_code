#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
	int a=10,b=20;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}
void swap(int& a,int& b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}