//defeance
#include<stdio.h>
#include<string.h>
struct Defence{
	int officerID;
	char name[50];
	double salary;
	
	Defence(){
		printf("Default constructor of defence!!\n");
		this->officerID=0;
		strcpy(this->name,"DefenceOfficer");
		this->salary=0;
	}
	
	Defence(int id,char* nm,double s){
		printf("parameterised constructor of defence!!\n");
		this->officerID=id;
		strcpy(this->name,nm);
		this->salary=s;
	}
	void setOfficerID(int id){
		this->officerID=id;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	void setSalary(double s){
		this->salary=s;
	}
	int getID(){
		return this->officerID;
	}
	char* getName(){
		return this->name;
	}
	
	double getSalary(){
		return  this->salary;
	}
	
	void display()
	{
		printf("Officer ID:%d\n",this->officerID);
		printf("Officer Name:%s\n",this->name);
		printf("Salary:%lf\n",this->salary);
	}
};

struct Army:public Defence{
	int guns;
	int tanks;
	Army():Defence(){
		printf("Default constructor of Army !!\n");
		this->guns=0;
		this->tanks=0;
	}
		Army(int id,char* nm,double s,int g,int t):Defence(id,nm,s){
		printf("Default constructor of Army !!\n");
		this->guns=g;
		this->tanks=t;
	}
	void setGuns(int g){
		this->guns=g;
	}
	void setTanks(int t){
		this->tanks=t;
	}
	int getGuns(){
		return this->guns;
	}
	int getTanks(){
		return this->tanks;
	}
	void display(){
		Defence::display();
		printf("No of guns:%d\n",this->guns);
		printf("No of Tanks:%d\n",this->tanks);
	}
};
struct Airforce:public Defence{
	int jets;
	int helicopter;
	Airforce():Defence(){
		printf("Default constructor of Airforce!!\n");
		this->jets=0;
		this->helicopter=0;
	}
	Airforce(int id,char* nm,double s,int j,int h):Defence(id,nm,s){
		printf("Parameterised constructor of Airforce!!\n");
		this->jets=j;
		this->helicopter=h;
	}
	void setjets(int j){
		this->jets=j;
		
	}
	void setHeplicopter(int h){
		this->helicopter=h;
	}
	
	int getJets(){
		return this->jets;
	}
	int getHeplicopter(){
		return this->helicopter;
	}
	void display(){
		Defence::display();
		printf("No of Jets:%d\n",this->jets);
		printf("No of Heplicopter:%d\n",this->helicopter);
	}
};
struct Navy:public Defence{
	int ships;
	int submarine;
	Navy(){
		printf("Default constructor of Navy!!\n");
		this->ships=0;
		this->submarine=0;
	}
	Navy(int id,char* nm,double s,int ships,int sub):Defence(id,nm,s){
		printf("Parameterised constructor of Navy!!\n");
		this->ships=ships;
		this->submarine=sub;
		
	}
	void setShips(int ship){
		this->ships=ship;
	}
	
	void setSubmarine(int sub){
		this->submarine=sub;
	}
	int getShips(){
		return this->ships;
	}
	int getSubmarine(){
		return this->submarine;
	}
	void display(){
		Defence::display();
		printf("No of Ships:%d\n",this->ships);
		printf("No of Submarine:%d\n",this->submarine);
	}
	
};
int main(){
	Army a1(1,"Prachiti",50000,2,4);
	a1.display();
	
	Airforce air1(102,"sayali",8000,5,6);
	air1.display();
	
	Navy n1(103,"Dip",4500,5,9);
	n1.display();
	return 0;
}

// melloc calloc realloc strings builtin functions as user defines all, difference betwee while and do while , for loop while loop , assignment question all pointr advantage disadvant
// pointer to structure 