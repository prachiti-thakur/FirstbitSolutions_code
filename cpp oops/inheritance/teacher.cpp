//teacher
#include<stdio.h>
#include<string.h>
struct Teacher{
	int id;
	char name[40];
	double Salary;
	char Quali[40];
	
	Teacher(){
		printf("Teacher default constructor called\n");
		this->id=0;
		strcpy(this->name,"Teacher");
		this->Salary=0;
		strcpy(this->Quali,"Qualification");
	}
	
	Teacher(int i,char* nm,double s,char* q){
		printf("Teacher default constructor called\n");
		this->id=i;
		strcpy(this->name,nm);
		this->Salary=s;
		strcpy(this->Quali,q);
	}
	
	void setId(int id){
		this->id=id;
	}
	
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setSalary(double s){
		this->Salary=s;
	}
	
	void setQuali(char* Qu){
		strcpy(this->Quali,Qu);
	}
	
	int getID(){
		return this->id;
	}
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return this->Salary;
	}
	
	char* getQu(){
		return this->Quali;
	}
	
	void display(){
		printf("ID:%d\n",this->id);
		printf("name:%s\n",this->name);
		printf("Salary:%lf\n",this->Salary);
		printf("Qualification:%s\n",this->Quali);
		
	}
};

struct DanceT:public Teacher{
	int noDance;
	int Trophies;
	
	DanceT(){
		printf("default Constructor of Dancet\n");
		this->noDance=0;
		this->Trophies=0;
	}
	
	DanceT(int i,char* nm,double p,char* q,int nd,int t):Teacher(i,nm,p,q){
		printf("default Constructor of Dancet\n");
		this->noDance=nd;
		this->Trophies=t;
	}
	
	void setNoDance(int nd){
		this->noDance=nd;
	}
	
	void setTrophies(int t){
		this->Trophies=t;
	}
	int getNoDance(){
		return this->noDance;
	}
	int getTrophies(){
		return this->Trophies;
	}
	
	void display(){
		Teacher::display();
		printf("No of Dance Known:%d\n",this->noDance);
		printf("No of trophies:%d\n",this->Trophies);
	}
};

struct codingT:public Teacher{
	int noLang;
	int ContestWin;
	
	codingT(){
		printf("Default constructor of CodingTeacher\n");
		this->noLang=0;
		this->ContestWin=0;
	}
	codingT(int i,char* nm,double p,char* q,int nl,int cw):Teacher(i,nm,p,q){
		printf("Parameterised constructor of coding Teacher\n");
		this->noLang=nl;
		this->ContestWin=cw;
	}
	void setNoLang(int l){
		this->noLang=l;
	}
	void setContestWin(int c){
		this->ContestWin=c;
	}
	int getNoLang(){
		return this->noLang;
	}
	int getContestWin(){
		return this->ContestWin;
	}
	
	void display(){
		Teacher::display();
		printf("No of languages known:%d\n",this->noLang);
		printf("No of contest Win:%d\n",this->ContestWin);
	}
};

int main(){
	Teacher t;
	DanceT d1;
	DanceT d2(120,"dip",2300,"BA.Dance",3,21);
	d2.display();
	return 0;
}