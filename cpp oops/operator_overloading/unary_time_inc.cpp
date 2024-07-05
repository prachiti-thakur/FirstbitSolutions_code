//unary on time 
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
	
	Time operator++(int){
		Time temp;
		//post incre  only consider here sec  //assign then increment
		
		
		temp.sec=this->sec;//temp.sec=(this->sec)++;
		temp.min=this->min;
		temp.hr=this->hr;
		
		(this->sec)++;
		
		if(this->sec>59){
			this->min=this->min +this->sec/60;
			this->sec=this->sec%60;
		}
		
		if(this->min>59){
			this->hr=this->hr+this->min/60;
			this->min=this->min%60;
		}
		
		return temp;
	}
	
	Time operator++(){
		Time temp;
		
		//pre increment 
		//1st incre then check then assign 
		++(this->sec);
		
		if(this->sec>59){
			this->min=this->min+(this->sec/60);
			//printf("this->min%d",this->sec/60);
			this->sec=this->sec%60;
		}
		
		if(this->min>59){
			this->hr=this->hr +(this->min/60);
			this->min=this->min%60;
		}
		
		temp.sec=this->sec;
		temp.min=this->min;
		temp.hr=this->hr;
		
		return temp;
	}
};

int main(){
	Time t(10,59,59);
	t.display();
	
	Time t1;
	t1.display();
	Time t2;
	t2.display();
	
	t1=++t;//t1.operator++(int)
	t1.display();
	t2=t++;//t1.operator++()
	t2.display();
	
	return 0;
}
