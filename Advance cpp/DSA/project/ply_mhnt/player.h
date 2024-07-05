#include<iostream>
using namespace std;
class Player{
	int jersyNo;
	char name[20];
	int noRuns;
	int noWickets;
	int noMatches;
	
	public:
		Player();
		Player(int ,char*,int,int ,int);
		void setjersyNo(int);
		void setName(char*);
		void setNoRuns(int);
		void setNoWickets(int);
		void setNoMatches(int);
		int getJersyNum();
		char* getName();
		int getRuns();
		int getwickets();
		int getNoMatches();
		void display();
		
};