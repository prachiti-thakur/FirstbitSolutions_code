#include<stdio.h>

struct time{
	int hr;
	int min;
	int sec;
	
	//setters
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
		printf("%d:%d:%d\n",this->hr,this->min,this->sec);
	}
	
	//getters
	int getHr(){
		return this->hr;
	}
	
	int getMin(){
		return this->min;
	}
	
	int getsec(){
		return this->sec;
	}
	
	//constructor
	time(){
		this->hr=0;
		this->min=0;
		this->sec=0;
		printf("Constructor called\n");//POC
	}
	time(int h, int m, int s){
		this->hr=h;
		this->min=m;
		this->sec=s;
		printf("Parameterised constructor called\n");
	}
};
int main(){
	time t1;
	printf("t1\n");
	t1.display();
	time t2(2,23,59);
	t2.display();
	t1.setHr(10);
	t1.setMin(20);
	t1.setSec(50);
	//t1.display();
	printf("After setting values of t1 by setters:");
	printf("%d:%d:%d",t1.getHr(),t1.getMin(),t1.getsec());
	return 0;
}