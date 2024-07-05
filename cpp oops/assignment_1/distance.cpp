//distance
#include<stdio.h>
#include<string.h>
struct Distance{
	double inches;
	double feets;
	
	void setInches(double inches){
		this->inches=inches;
		
	}
	
	void setFeets(double F){
		this->feets=F;
	}
	
	void display(){
		printf("%.2lf inches ,%.2lffeets",this->inches,this->feets);
	}
};
int main(){
	Distance d;
	d.setInches(10.5);
	d.setFeets(11.7);
	d.display();
	return 0;
}