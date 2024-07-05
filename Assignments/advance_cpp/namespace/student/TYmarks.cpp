
#include"TYmarks.h"

TY::TYmarks::TYmarks(){
	this->theory=0;
	this->practical=0;
}
TY::TYmarks::TYmarks(int t,int p){
	this->theory=t;
	this->practical=p;
}
void TY::TYmarks::setTheory(int t){
	this->theory=t;
}

void TY::TYmarks::setPractical(int p){
	this->practical=p;
}

int TY::TYmarks::getTheory(){
	return this->theory;
}
int TY::TYmarks::getPractical(){
	return this->practical;
}

