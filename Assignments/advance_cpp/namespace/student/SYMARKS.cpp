#include"SYMARKS.h"

namespace SY{
	SYMARKS::SYMARKS(){
	this->Tcom=0;
	this->Telec=0;
	this->Tmaths=0;
}
SYMARKS::SYMARKS(int c,int e,int m){
	this->Tcom=c;
	this->Telec=e;
	this->Tmaths=m;
}
void SYMARKS::setTcom(int c){
	this->Tcom=c;
}
void SYMARKS::setTelec(int e){
	this->Telec=e;
}
void SYMARKS::setTmaths(int m){
		this->Tmaths=m;
}

int SYMARKS::getTcom(){
	return this->Tcom;
}
int SYMARKS::getTelec(){
	return this->Telec;
}
int SYMARKS::getTmaths(){
	return this->Tmaths;
}
		
}
