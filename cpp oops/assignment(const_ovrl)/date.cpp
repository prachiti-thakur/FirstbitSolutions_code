#include<stdio.h>
struct Date{
	int day;
	int mon;
	int year;
	
	//setter
	void setday(int d){
		this->day=d;
	}
	
	void setmon(int m){
		this->mon=m;
	}
	void setyear(int y){
		this->year=y;
	}
	
	void display(){
		printf("%d-%d-%d\n",this->day,this->mon,this->year);
		}
		//getters
	int getDay(){
		return this->day;
	}
	
	int getMon(){
		return this->mon;
	}
	
	int getyear(){
		return this->year;
	}
	
	//constructor
	Date(){
		this->day=0;
		this->mon=0;
		this->year=0;
		printf("Constructor called\n");//POC
	}
	
	//parameterised constructor
	Date(int d,int m,int y){
		this->day=d;
		this->mon=m;
		this->year=y;
		printf("Parameterised constructor called\n");
	}
};
int main(){
	Date d1;
	printf("d1\n");
	d1.display();
	Date d2(20,6,2024);
	d2.display();
	d1.setday(10);
	d1.setmon(2);
	d1.setyear(2024);
	//d1.display();
	printf("After setting values of d1 from setters:\n");
	printf("print by using getters:\n");
	printf("%d-%d-%d",d1.getDay(),d1.getMon(),d1.getyear());
	return 0;
}