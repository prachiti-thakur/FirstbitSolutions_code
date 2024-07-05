//loan approval
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Student{
	int rollNo;
	char name[20];
	double percentage;
	
	
	Student(){
		cout<<"Defalut const\n";
		this->rollNo=0;
		strcpy(this->name,"student");
		this->percentage=0;
	}
	
	Student(int r,char* nm, double p){
		cout<<"Parameterised const\n";
		this->rollNo=r;
		strcpy(this->name,nm);
		this->percentage=p;
	}
	void setRollno(int r){
		this->rollNo=r;
	}
	
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	
	void setPercentage(double p){
		this->percentage=p;
	}
	
	//getters
	int getRollno(){
		return this->rollNo;
	}
	
	char* getName(){
		return this->name;
	}
	
	double getPercentage(){
		return this->percentage;
	}
	
	void display(){
		cout<<"Roll No :"<<this->rollNo<<"\n";
		cout<<"Name:"<<this->name<<"\n";
		cout<<"Percentage:"<<this->percentage<<"\n";
	}
	
	
	
	
};



	struct Employee{
		int id;
		char name[20];
		double salary;
		
		Employee(){
			cout<<"Deflaut constructor!\n";
			this->id=0;
			strcpy(this->name,"Employee");
			this->salary=0;
			
		}
		
		Employee(int i,char* nm,double s){
		cout<<"Parameterised constructor called\n";
			this->id=i;
			strcpy(this->name,nm);
			this->salary=s;
		}
		
		void setId(int i){
			this->id=i;
		}
		
		void setName(char* nm)
		{
			strcpy(this->name,nm);
		}
		
		void setSalary(double s){
			this->salary=s;
		}
		
		//getters
		int getId(){
			return this->id;
		}
		
		char* getname(){
			return this->name;
		}
		
		double getSalary(){
			return this->salary;
		}
		
		void display(){
			cout<<"Id:"<<this->id<<"\n";
			cout<<"Name:"<<this->name<<"\n";
			cout<<"Salary:"<<this->salary<<"\n";
		}
		
	
};


struct LoanAprroval{
	
	double toapproveLoan(Student s){
		double loan;
				if(s.getPercentage()>=80){
					loan=200000;
					return loan;
				}
				else{
						if(s.getPercentage()>=60){
							loan=100000;
							return loan;
						}
						else{
								if(s.getPercentage()<=50 && s.getPercentage()>=40){
									loan=50000;
									return loan;
								}
								else{
									if(s.getPercentage()<40){
										loan=0;
										return loan;
									}
								}
						}
				}
				return 0;
	}
	
	
	double toapproveLoan(Employee e){
		double loan;
				if(e.getSalary()>=1200000){
					loan=700000;
					return loan ;
				}
				else{
							if(e.getSalary()>=1000000){
								loan=600000;
								return loan;
							}
							else{
									if(e.getSalary()>=600000){
										loan=500000;
										return loan ;
									}
									else{
										if(e.getSalary()>=400000){
											loan=400000;
											return loan ;
										}
										else{
											if(e.getSalary()<400000){
												loan=0;
												return loan;
											}
										}
									}
							}
				}
				
				return 0;
	}
	
};

int main(){
	Student s1(1,"prachiti",60);
	s1.display();
	Employee e1(101,"hruru",700000);
	e1.display();
	
	LoanAprroval loanA;
	double loan_S=loanA.toapproveLoan(s1);
	if(loan_S!=0)
	{
		printf("approve loan of :%lf\n",loan_S);
	}
	else{
		printf("Not approve!!");
	}
	
	double loan_E=loanA.toapproveLoan(e1);
	if(loan_E!=0)
	{
		cout<<"approve loan of :"<<loan_E<<"\n";
	}
	else{
		cout<<"Not approve!!";
	}
	
	return 0;
}