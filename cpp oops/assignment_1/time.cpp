#include<stdio.h>

struct time{
	int hr;
	int min;
	int sec;
	
	void setHr(int h){
		this->hr=h;
	}
	void setMin(int m){
		this->min=m;
	}
	void setSec(int s){
		this->sec=s;
	}
	
	void display(){
		printf("%d:%d:%d",this->hr,this->min,this->sec);
	}
	
};
int main(){
	time t1;
	t1.setHr(10);
	t1.setMin(20);
	t1.setSec(50);
	t1.display();
	return 0;
}