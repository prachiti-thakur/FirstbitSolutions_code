//bulb
//#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
struct Bulb{
	int id;
	char cName[50];
	double price;
	
	Bulb(){
		cout<<"\nDefault constructor of Bulb\n";
		this->id=0;
		strcpy(this->cName,"Bulb");
		this->price=0;
	}
	
	Bulb(int i,char* cnm,double p){
		cout<<"\nParameterised constructor of Bulb\n";
		this->id=i;
		strcpy(this->cName,cnm);
		this->price=p;
	}
	
	
	void setId(int id){
		this->id=id;
	}
	void setCname(char* nm){
		strcpy(this->cName,nm);
	}
	void setPrice(double p){
		this->price=p;
	}
	
	int getID(){
		return this->id;
	}
	char* getName(){
		return this->cName;
	}
	
	double getPrice(){
		return this->price;
	}
	
	virtual void display(){
		cout<<"\nModelId:"<<this->id<<"\n";
		cout<<"Company Name:"<<this->cName<<"\n";
		cout<<"Price:"<<this->price<<"\n";
	}
	virtual void toemit()
	{
		cout<<"Blub is emitting light!!\n";
	}
	
	
};

struct TugsB:public Bulb{
	double volumeTug;
	double LenCoil;
	
	TugsB(){
		cout<<"\nDefault constructor of TugsB\n";
		this->volumeTug=0;
		this->LenCoil=0;
	}
		
	TugsB(int i,char* cnm,double p,double vb,double len):Bulb(i,cnm,p){
cout<<"\nparameterised constructor of TugsB\n";
		this->volumeTug=vb;
		this->LenCoil=len;//melting pints
		}
		
		void setVolumetug(double vb)
		{
			this->volumeTug=vb;
		}
		
		void setLenCoil(double len){
			this->LenCoil=len;
		}
	
	double getVolumetug(){
		return this->volumeTug;
	}
	
	double getLenCoil(){
		return this->LenCoil;
	}
	
	void display(){
		//use blubs display fun
		Bulb::display();
		cout<<"volumeTug:"<<this->volumeTug <<"\n";
		cout<<"length of coil:"<<this->LenCoil<<"\n";
	}
	void toemit()
	{
		cout<<" Tugusten Blub is emitting light!!\n";
	}
	
};//TugsB ends here
struct LED:public Bulb{
	double volumeSemC;
	
	LED(){
		cout<<"Default constructor of LED\n";
		this->volumeSemC=0;
	}
	
	LED(int i,char* Cnm,double p,double vs):Bulb(i,Cnm,p){
		cout<<"Parameterised constructor of LED\n";
		this->volumeSemC=vs;
	}
	void SetVolumeS(double vs){
		this->volumeSemC=vs;
	}
	
	double getVolumeS(){
		return this->volumeSemC;
	}
	void display(){
		Bulb::display(); //scope resolution operator
		cout<<"volumeSemC:"<<this->volumeSemC<<"\n";
	}
	void toemit()
	{
		cout<<" LED Blub is emitting light!!\n";
	}
	
	
};
int main_1(){
	Bulb b;
	b.display();
	
	TugsB t;
	TugsB t1(120,"DIP",560,20,12);
	t1.display();
	
	LED l;
	LED l2(108,"LED",450,62);
	l2.display();
	return 0;
}
int main()
{  
	Bulb* bp;
	TugsB t1(120,"DIP",560,20,12);
	bp=&t1;
	bp->display();
	bp->toemit();
	
	LED l2(108,"LED",450,62);
	bp=&l2;
	bp->display();
	bp->toemit();
	return 0;
}