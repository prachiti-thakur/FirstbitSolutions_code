#include<stdio.h>
struct Time{
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
	Time(){
		this->hr=0;
		this->min=0;
		this->sec=0;
		printf("Constructor called\n");//POC
	}
	Time(int h, int m, int s){
		this->hr=h;
		this->min=m;
		this->sec=s;
		printf("Parameterised constructor called\n");
	}
};

struct display_T{
	void todis(Time t1,Time t2)
	{
		printf("time_1:->%d:%d:%d\n",t1.getHr(),t1.getMin(),t1.getsec());
		printf("time_2:->%d:%d:%d\n",t2.getHr(),t2.getMin(),t2.getsec());
	}
	
	void todis(Time t1, Time t2,Time t3){
		printf("time_1->%d:%d:%d\n",t1.getHr(),t1.getMin(),t1.getsec());
		printf("time_2->%d:%d:%d\n",t2.getHr(),t2.getMin(),t2.getsec());
		printf("time_2->%d:%d:%d\n",t3.getHr(),t3.getMin(),t3.getsec());
	}
};

int main(){
	Time t1(1,20,56);
	Time t2(2,23,45);
	 
	 display_T d;
	 d.todis(t1,t2);
	return 0;
}