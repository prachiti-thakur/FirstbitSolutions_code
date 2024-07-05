//player

#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct player
{
	int id;
	char name[60];
	int noTrophies;
	
	player(){
		cout<<"Default constructor of player!\n";
		this->id=0;
		strcpy(this->name,"Player");
		this->noTrophies=0;
	}
	
	player(int id,char* nm,int t){
		cout<<"parameterised constructor of player!\n";
		this->id=id;
		strcpy(this->name,nm);
		this->noTrophies=t;
	}
	
	void setId(int i){
		this->id=i;
	}
	
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setTrophies(int t){
		this->noTrophies=t;
	}
	
	int getId(){
		return this->id;
	}
	
	char* getName(){
		return this->name;
	}
	
	double getTrophies(){
		return this->noTrophies;
	}
	
	virtual void display(){
		cout<<"Id:"<<this->id<<"\n";
		cout<<"Name:"<<this->name<<"\n";
		cout<<"No of trophies:"<<this->noTrophies<<"\n";
	}
	virtual void toplay(){
		cout<<"Player is playing\n";
	}
};

struct CricketP:public player{
	int noOfwickets;
	int noOfRuns;
	
	CricketP(){
		cout<<"default constructor called of Cricet player\n";
		this->noOfwickets=0;
		this->noTrophies=0;
		
	}
		CricketP(int i,char* nm, int Tro,int w,int r):player(i,nm,Tro){
		cout<<"Parameterised constructor of cricket player called\n";
		this->noOfwickets=w;
		this->noOfRuns=r;
		
	}
	
	void setWicket(int w){
		this->noOfwickets=w;
	}
	void setRuns(int r){
		this->noOfRuns=r;
	}
	int getWickets(){
		return this->noOfwickets;
	}
	int getRuns(){
		return this->noOfRuns;
	}
	
	void display(){
		player::display();
		cout<<"No of wickets:"<<this->noOfwickets<<"\n";
		cout<<"No of Runs :"<<this->noOfRuns<<"\n";
	}
	void toplay(){
		cout<<"Cricket Player is playing cricket\n";
	}
};

struct FootballP:public player{
	
	int noOFGoals;
	FootballP(){
		cout<<"FootBall default constructor called!\n";
		this->noOFGoals=0;
	}
	FootballP(int i,char* nm,int t,int g):player(i,nm,t){
		cout<<"FootBall Parameterised constructor called!\n";
		this->noOFGoals=g;
	}
	void setGoals(int g){
		this->noOFGoals=g;
	}
	int getGoals(){
		return this->noOFGoals;
	}
	void display(){
		player::display();
		cout<<"No of goals:"<<this->noOFGoals<<"\n";
	}
	
	 void toplay(){
	cout<<"Football Player is playing football\n";
	}
};
int main_1(){
	player p;

	CricketP c1(101,"Prachiti",5,67,90);
	c1.display();
	
	FootballP f1(102,"hrutu",7,80);
	f1.display();
	return 0;
}
int main()
{
	player* p;

	CricketP c1(101,"Prachiti",5,67,90);
	p=&c1;
	p->display();
	p->toplay();
	
	FootballP f1(102,"hrutu",7,80);
	p=&f1;
	p->display();
	p->toplay();
	return 0;
}