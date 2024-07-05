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
};
int main(){
	Date d1;
	d1.display();
	d1.setday(10);
	d1.setmon(2);
	d1.setyear(2024);
	//d1.display();
	printf("%d-%d-%d",d1.getDay(),d1.getMon(),d1.getyear());
	return 0;
}