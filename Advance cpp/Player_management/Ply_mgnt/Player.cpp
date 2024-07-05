#include"player.h"

Player::Player(){
	this->jersyNo=0;
	strcpy(this->name,"player");
	this->noRuns=0;
	this->noWickets=0;
	this->noMatches=0;
}
Player::Player(int jn ,char* nm,int run,int  wic,int mat){
	this->jersyNo=jn;
	strcpy(this->name,nm);
	this->noRuns=run;
	this->noWickets=wic;
	this->noMatches=mat;
}
void Player::setjersyNo(int jn){
		this->jersyNo=jn;
}
void Player::setName(char* nm){
		strcpy(this->name,nm);
}
void Player::setNoRuns(int run){
	  	this->noRuns=run;
}
void Player::setNoWickets(int wic){
		this->noWickets=wic;
}
void Player::setNoMatches(int mat){
		this->noMatches=mat;
}

int Player::getJersyNum(){
	return this->jersyNo;
}
char* Player::getName(){
	return this->name;
}
int Player::getRuns(){
	return this->noRuns;
}
int Player::getwickets(){
	return this->noWickets;
}
int Player::getNoMatches(){
	return this->noMatches;
}
void Player::display(){
	cout<<"\nPlayer\n";
	cout<<"Player's jersyNo: "<<this->jersyNo<<"\n";
	cout<<"Player's name:"<<this->name<<"\n";
	cout<<"Player's noRuns:"<<this->noRuns<<"\n";
	cout<<"Player's noWickets:"<<this->noWickets<<"\n";
	cout<<"Player's noMatches:"<<this->noMatches<<"\n";
}