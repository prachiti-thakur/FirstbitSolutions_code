//teacher
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Teacher{
	int id;
	char name[40];
	double Salary;
	char Quali[40];
	
	Teacher(){
		cout<<"Teacher default constructor called\n";
		this->id=0;
		strcpy(this->name,"Teacher");
		this->Salary=0;
		strcpy(this->Quali,"Qualification");
	}
	
	Teacher(int i,char* nm,double s,char* q){
		cout<<"Teacher default constructor called\n";
		this->id=i;
		strcpy(this->name,nm);
		this->Salary=s;
		strcpy(this->Quali,q);
	}
	
	void setId(int id){
		this->id=id;
	}
	
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setSalary(double s){
		this->Salary=s;
	}
	
	void setQuali(char* Qu){
		strcpy(this->Quali,Qu);
	}
	
	int getID(){
		return this->id;
	}
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return this->Salary;
	}
	
	char* getQu(){
		return this->Quali;
	}
	
	virtual void display(){
		cout<<"ID:"<<this->id<<"\n";
		cout<<"name:"<<this->name<<"\n";
		cout<<"Salary:"<<this->Salary<<"\n";
		cout<<"Qualification:"<<this->Quali<<"\n";
		
	}
	virtual void toteach(){
		cout<<"Teacher is teaching\n";
	}
};

struct DanceT:public Teacher{
	int noDance;
	int Trophies;
	
	DanceT(){
		cout<<"default Constructor of Dancet\n";
		this->noDance=0;
		this->Trophies=0;
	}
	
	DanceT(int i,char* nm,double p,char* q,int nd,int t):Teacher(i,nm,p,q){
		cout<<"default Constructor of Dancet\n";
		this->noDance=nd;
		this->Trophies=t;
	}
	
	void setNoDance(int nd){
		this->noDance=nd;
	}
	
	void setTrophies(int t){
		this->Trophies=t;
	}
	int getNoDance(){
		return this->noDance;
	}
	int getTrophies(){
		return this->Trophies;
	}
	
	void display(){
		Teacher::display();
		cout<<"No of Dance Known:"<<this->noDance<<"\n";
		cout<<"No of trophies:"<<this->Trophies<<"\n";
	}
	
	void toteach(){
		cout<<"Teacher is teaching Dance\n";
	}
};

struct codingT:public Teacher{
	int noLang;
	int ContestWin;
	
	codingT(){
		cout<<"Default constructor of CodingTeacher\n";
		this->noLang=0;
		this->ContestWin=0;
	}
	codingT(int i,char* nm,double p,char* q,int nl,int cw):Teacher(i,nm,p,q){
		cout<<"Parameterised constructor of coding Teacher\n";
		this->noLang=nl;
		this->ContestWin=cw;
	}
	void setNoLang(int l){
		this->noLang=l;
	}
	void setContestWin(int c){
		this->ContestWin=c;
	}
	int getNoLang(){
		return this->noLang;
	}
	int getContestWin(){
		return this->ContestWin;
	}
	
	void display(){
		Teacher::display();
		cout<<"No of languages known:"<<this->noLang<<"\n";
		cout<<"No of contest Win:"<<this->ContestWin<<"\n";
	}
		void toteach(){
		cout<<"Teacher is teaching Coding\n";
	}
};

int main_1(){
	Teacher t;
	DanceT d1;
	DanceT d2(120,"dip",2300,"BA.Dance",3,21);
	d2.display();
	return 0;
}
int main(){
	Teacher* tp;
	DanceT d2(120,"dip",2300,"BA.Dance",3,21);
	tp=&d2;
	tp->display();
	tp->toteach();
	
	codingT c(104,"Prashi",8900,"B.tech",9,10);
	tp=&c;
	tp->display();
	tp->toteach();
	return 0;
}