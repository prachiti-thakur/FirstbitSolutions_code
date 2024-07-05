//calculator
#include<stdio.h>
#include<iostream>
using namespace std;
struct Calculator{
	//add
	int add(int a,int b){
		return a+b;
	}
	
	float add(float a,float b){
		return a+b;
	}
	
	float add(int a,float b){
		return a+b;
	}
	float add(float a,int b){
		return a+b;
	}
	
	//sub
	int sub(int a,int b){
		return a-b;
	}
	float sub(float a,float b){
		return a-b;
	}
	float sub(int a,float b){
		return a-b;
	}
	float sub(float a,int b){
		return a-b;
	}
	
	//mul
	int mul(int a, int b){
		return a*b;
	}
	
	float mul(float a,float b){
		return a*b;
	}
	
	float mul(int a,float b){
		return a*b;
	}
	float mul(float a, int b){
		return a*b;
	}
	//div
	int div(int a,int b){
		return a/b;
	}
	
	float div(float a,float b)
	{
	return a/b;
	}	
	
	int div(int a,float b){
		return a/b;
	}
	
	float div(float a,int b){
		return a/b;
	}
	
	
};

int main(){
	
	Calculator c;
	int x=10,y=20;
	float p=20.5,q=5.5;
	cout<<"Add (overloading:)\n\n";
	cout<<"add(int,int)"<<c.add(x,y)<<"\n";
	cout<<"add(float,float):"<<c.add(p,q)<<"\n";
	cout<<"add(int,float):"<<c.add(x,p)<<"\n";
	cout<<"add(float,int):"<<c.add(p,x)<<"\n";
	
	cout<<"\n\nSub(overloading:)\n\n";
	
	
	cout<<"sub(int,int):"<<c.sub(y,x)<<"\n";
	cout<<"sub(float,float):"<<c.sub(p,q)<<"\n";
	cout<<"sub(int,float):"<<c.sub(y,q)<<"\n";
	cout<<"sub(float,int):"<<c.sub(p,x)<<"\n";
	
	cout<<"\n\nMul (overloading:)\n\n";
	
	cout<<"mul(int,int):"<<c.mul(x,y)<<"\n";
	cout<<"mul(flaot,float)"<<c.mul(p,q)<<'\n';
	cout<<"mul(int,float):"<<c.mul(x,q)<<"\n";
	cout<<"mul(flaot,int):"<<c.mul(p,y)<<"\n";
	
	cout<<"\n\ndiv (overloading:)\n\n"<<"\n";
	cout<<"div(int,int):"<<c.div(y,x)<<"\n";
	cout<<"div(float,float):"<<c.div(p,q)<<"\n";
	cout<<"div(int,float):"<<c.div(y,q)<<"\n";
	cout<<"div(float,int):"<<c.div(p,x)<<"\n";
	
	
	return 0;
}