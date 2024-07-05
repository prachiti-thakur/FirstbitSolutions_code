#include<stdio.h>
struct date{
	int day;
	int mon;
	int year;
	
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
		printf("%d-%d-%d",this->day,this->mon,this->year);
	}
};
int main(){
	date d1;
	d1.setday(10);
	d1.setmon(2);
	d1.setyear(2024);
	d1.display();
	return 0;
}