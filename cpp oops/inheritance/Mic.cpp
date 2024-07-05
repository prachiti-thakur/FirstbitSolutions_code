//MIC
#include<stdio.h>
#include<string.h>
struct Mic{
	int id;
	char Cname[50];
	double price;
	
	Mic(){
		printf("Default constructor of Mic\n");
		this->id=0;
		strcpy(this->Cname,"MIC");
		this->price=0;
	}
	Mic(int i,char* nm,double p){
		printf("Parameterised constructor of MIC\n");
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
	void display(){
		printf("ID:%d\n",this->id);
		printf("Name:%s\n",this->Cname);
		printf("Price:%lf\n",this->price);
	}
}; //mic ends 

struct WiredMic:public Mic{
	char type[60];
	
	WiredMic(){
		printf("Default constructor wired  called\n");
		strcpy(this->type,"CType");
	}
	
	WiredMic(int i,char* cnm,double p,char* t):Mic(i,cnm,p){
		printf("Parameterised constructor wired  called\n");
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
		printf("Type :%s\n",this->type);
	}
	
};

struct WirelessMic:public Mic{
	char versionB[50];
	
	WirelessMic(){
		printf("default construtor of wireless \n");
		strcpy(this->versionB,"Version");
	}
	WirelessMic(int i,char*cnm,double p,char* vb):Mic(i,cnm,p){
		printf("default construtor of wireless \n");
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
		printf("VersionType:%s\n",this->versionB);
	}
	
};

int main(){
	Mic m;
	WiredMic m1(1,"Prachiti",500,"Btype");
	m1.display();
	WirelessMic w1(2,"Hrutu",677,"version3.4");
	w1.display();
	
	
	return 0;
}