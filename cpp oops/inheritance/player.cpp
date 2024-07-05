//player

#include<stdio.h>
#include<string.h>
struct player
{
	int id;
	char name[60];
	int noTrophies;
	
	player(){
		printf("Default constructor of player!\n");
		this->id=0;
		strcpy(this->name,"Player");
		this->noTrophies=0;
	}
	
	player(int id,char* nm,int t){
		printf("parameterised constructor of player!\n");
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
	
	void display(){
		printf("Id:%d\n",this->id);
		printf("Name:%s\n",this->name);
		printf("No of trophies:%d\n",this->noTrophies);
	}
};

struct CricketP:public player{
	int noOfwickets;
	int noOfRuns;
	
	CricketP(){
		printf("default constructor called of Cricet player\n");
		this->noOfwickets=0;
		this->noTrophies=0;
		
	}
		CricketP(int i,char* nm, int Tro,int w,int r):player(i,nm,Tro){
		printf("Parameterised constructor of cricket player called\n");
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
		printf("No of wickets:%d\n",this->noOfwickets);
		printf("No of Runs :%d\n",this->noOfRuns);
	}
};

struct FootballP:public player{
	
	int noOFGoals;
	FootballP(){
		printf("FootBall default constructor called!\n");
		this->noOFGoals=0;
	}
	FootballP(int i,char* nm,int t,int g):player(i,nm,t){
		printf("FootBall Parameterised constructor called!\n");
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
		printf("No of goals:%d",this->noOFGoals);
	}
};
int main(){
	player p;

	CricketP c1(101,"Prachiti",5,67,90);
	c1.display();
	
	FootballP f1(102,"hrutu",7,80);
	f1.display();
	return 0;
}