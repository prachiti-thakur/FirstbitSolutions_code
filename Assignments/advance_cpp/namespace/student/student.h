#include"SYMARKS.h"
#include"TYmarks.h"
using namespace TY;
using namespace SY;
//has a relationship 
class Student {
	int rnum;
	char name[20];
	//SY::SYMARKS s; //as we are not defining using namespace SY;
	SYMARKS s;
	TYmarks t;
	public:
	Student();
	Student(int,const char*,SYMARKS,TYmarks);
	
	void setRnum(int );
	void setName(const char*);
	void setSYMARKs(SYMARKS);
	void setTYmarks(TYmarks);
	
	int getRnum();
	char* getName();
	SYMARKS getSYMARKS();
	TYmarks getTYmarks();
	
	void Result();
	void display();
	
};

ostream& operator<<(ostream& ,TYmarks&);
ostream& operator<<(ostream&,SYMARKS&);