#include<iostream>
using namespace std;


class Acount{
	int acNum;
	double balance;
	static int count ;
	
	public:
	Acount(){
		
	this->acNum=count;
	this->balance=0;
	Acount::count++;
	}
	Acount(int b){
	
	this->acNum=count;
	this->balance=b;
	Acount::count++;
	}
	
	void setBalance(double b){
		this->balance=b;
	}
	double getBalance(){
			return this->balance;
	}
	
	static int getcount(){
			return Acount::count;
	}
	
	void display(){
			cout<<"Account:\n";
	cout<<"Ac_num:"<<this->acNum<<"\n";
	cout<<"Balance:"<<this->balance<<"\n";
	cout<<"Account count::"<<Acount::count<<"\n";
	}
	
	double deposite(double amt){
		this->balance=this->balance+amt;
		return this->balance;
	}
	
	double withdraw(double amt){
		this->balance=this->balance-amt;
		return this->balance;
	}
	
};
int Acount::count=0;

int main(){
	cout<<Acount::getcount();
	Acount a;
	a.display();
	cout<<Acount::getcount();
	Acount b(300);
	b.display();
	cout<<Acount::getcount();
	Acount c(700);
	c.display();
	c.deposite(300);
	double r=c.withdraw(200);
	cout<<"After  withdraw balance:"<<r;
	return 0;
}