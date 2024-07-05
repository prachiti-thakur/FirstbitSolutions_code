#include"student.h"



Student::Student(){
	this->rnum=0;
	strcpy(this->name,"Student");
	this->s=SYMARKS(0,0,0);
	this->t=TYmarks(0,0);
}
Student::Student(int rnum,const char* name,SYMARKS sm,TYmarks tm){
	this->rnum=rnum;
	strcpy(this->name,name);
	this->s=sm;
	this->t=tm;
}

void Student::setRnum(int r ){
	this->rnum=r;
}
void Student::setName(const char *nm){
	strcpy(this->name,nm);
}
void Student::setSYMARKs(SYMARKS sm){
	this->s=sm;
}
void Student::setTYmarks(TYmarks tm){
	this->t=tm;
}

int Student::getRnum()
{
	return this->rnum;
}
char* Student::getName(){
	return this->name;
}
SYMARKS Student::getSYMARKS(){
	return this->s;
}
	
TYmarks Student::getTYmarks(){
	return this->t;
}

void Student::Result(){
	
//	SY::SYMARKS sy=this->getSYMARKS();
//	TY::TYmarks ty=this->getTYmarks();
//	int total=sy.getTcom()+ty.getPractical()+ty.getTheory();

int total=this->getSYMARKS().getTcom()+this->getTYmarks().getPractical()+this->getTYmarks().getTheory();
int avg=total/3;

if(avg>=70){
	cout<<"Stdent:"<<this->name<<"\tGRADE:"<<"A";
}else{
	if(avg>=60){
			cout<<"Stdent:"<<this->name<<"\tGRADE:"<<"B";
	}
	else{
		if(avg>=50){
				cout<<"Stdent:"<<this->name<<"\tGRADE:"<<"C";
			}else{
				if(avg>=40){
						cout<<"Stdent:"<<this->name<<"\tGRADE:"<<"Fails";
				}
			}
		}
	}
	
	
}
	
void Student::display(){
	cout<<"Student roll number:"<<this->rnum<<"\n";
	cout<<"Student Nane:"<<this->name<<"\n";
	//cout<<"SYMARKS:\n";
//	cout<<this->getSYMARKS().getTcom()<<"\n";
//	cout<<this->getSYMARKS().getTelec()<<"\n";
//	cout<<this->getSYMARKS().getTmaths()<<"\n";
	cout<<this->s;
	cout<<this->t;
}


ostream& operator<<(ostream& o,SYMARKS& s ){
			o<<"SYMarks:\n";
			o<<"marks of computer:"<<s.getTcom()<<"\n";
		 	o<<"Marks of electroincs:"<<s.getTelec()<<"\n";
			o<<"Marks of Maths:"<<s.getTmaths()<<"\n";
			
			return o;
		}
		
	ostream& operator<<(ostream& o,TYmarks& t ){
			o<<"TYMarks:\n";
			o<<"Marks of theory:"<<t.getTheory()<<"\n";
			o<<"Marks of Practical:"<<t.getPractical()<<"\n";
			
			return o;
		}

