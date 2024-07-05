//bulb
#include<stdio.h>
#include<string.h>
struct Bulb{
	int id;
	char cName[50];
	double price;
	
	Bulb(){
		printf("\nDefault constructor of Bulb\n");
		this->id=0;
		strcpy(this->cName,"Bulb");
		this->price=0;
	}
	
	Bulb(int i,char* cnm,double p){
		printf("\nParameterised constructor of Bulb\n");
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
	
	void display(){
		printf("\nModelId:%d\n",this->id);
		printf("Company Name:%s\n",this->cName);
		printf("Price:%lf\n",this->price);
	}
	
};

struct TugsB:public Bulb{
	double volumeTug;
	double LenCoil;
	
	TugsB(){
		printf("\nDefault constructor of TugsB\n");
		this->volumeTug=0;
		this->LenCoil=0;
	}
		
	TugsB(int i,char* cnm,double p,double vb,double len):Bulb(i,cnm,p){
	printf("\nparameterised constructor of TugsB\n");
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
		printf("volumeTug:%lf\n",this->volumeTug);
		printf("length of coil:%lf\n",this->LenCoil);
	}
};//TugsB ends here
struct LED:public Bulb{
	double volumeSemC;
	
	LED(){
		printf("Default constructor of LED\n");
		this->volumeSemC=0;
	}
	
	LED(int i,char* Cnm,double p,double vs):Bulb(i,Cnm,p){
		printf("Parameterised constructor of LED\n");
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
		printf("volumeSemC:%lf\n",this->volumeSemC);
	}
	
	
};
int main(){
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