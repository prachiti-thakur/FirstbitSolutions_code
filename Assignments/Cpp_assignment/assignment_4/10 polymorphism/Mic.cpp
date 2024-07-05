//MIC
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Mic{
	int id;
	char Cname[50];
	double price;
	
	Mic(){
	cout<<"Default constructor of Mic\n";
		this->id=0;
		strcpy(this->Cname,"MIC");
		this->price=0;
	}
	Mic(int i,char* nm,double p){
		cout<<"Parameterised constructor of MIC\n";
		this->id=i;
		strcpy(this->Cname,nm);
		this->price=p;
	}
	
	void setID(int i){
		this->id=i;
	}
	void setCname(char* nm){
		strcpy(this->Cname,nm);
	}
	void setPrice(double p){
		this->price=p;
	}
	int getID(){
		return this->id;
	}
	char* getName(){
		return this->Cname;
	}
	double getPrice(){
		return this->price;
	}
	virtual void display(){
		cout<<"ID:"<<this->id<<"\n";
		cout<<"Name:"<<this->Cname<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	virtual void toconnect(){
		cout<<"Mic  is connected!!\n";
	}
}; //mic ends 

struct WiredMic:public Mic{
	char type[60];
	
	WiredMic(){
		cout<<"Default constructor wired  called\n";
		strcpy(this->type,"CType");
	}
	
	WiredMic(int i,char* cnm,double p,char* t):Mic(i,cnm,p){
		cout<<"Parameterised constructor wired  called\n";
		strcpy(this->type,t);
	}
	
	void setType(char* t){
		strcpy(this->type,t);
	}
	
	char* getType(){
		return this->type;
	}
	void display(){
		Mic::display();
		cout<<"Type :"<<this->type<<"\n";
	}
	void toconnect(){
		cout<<"Mic  is connected by wired :"<<this->type<<"\n";
	}
	
};

struct WirelessMic:public Mic{
	char versionB[50];
	
	WirelessMic(){
		cout<<"default construtor of wireless \n";
		strcpy(this->versionB,"Version");
	}
	WirelessMic(int i,char*cnm,double p,char* vb):Mic(i,cnm,p){
		cout<<"default construtor of wireless \n";
		strcpy(this->versionB,vb);
	}
	void setVersion(char* vb){
		strcpy(this->versionB,vb);
	}
	char* getVersion(){
		return this->versionB;
	}
	void display(){
		Mic::display();
		cout<<"VersionType:"<<this->versionB<<"\n";
	}
 	void toconnect	(){
		cout<<"Mic  is connected by wirelessly by Bluetooth "<<this->versionB<<"\n";
	}
	
};

int main_1(){
	Mic m;
	WiredMic m1(1,"Prachiti",500,"Btype");
	m1.display();
	WirelessMic w1(2,"Hrutu",677,"version3.4");
	w1.display();
	
	
	return 0;
}
int main()
{
	Mic* mp;
	WiredMic m1(1,"Prachiti",500,"Btype");
	mp=&m1;
	mp->display();
	mp->toconnect();
	
	WirelessMic w1(2,"Hrutu",677,"version3.4");
	mp=&w1;
	mp->display();
	mp->toconnect();
	return 0;
}