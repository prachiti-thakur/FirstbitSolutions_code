//distance
#include<stdio.h>
#include<string.h>
struct Distance{
	double feets;
	double inches;
	
	
	//setters
		void setFeets(double F){
		this->feets=F;
	}
	
	
	void setInches(double inches){
		this->inches=inches;
		
	}
	

	void display(){
		printf("%.2lf feets,%.2lf inches\n",this->inches,this->feets);
	}
	
	//getters
	
	double getfeets(){
		return this->feets;
	}
	
	double getinches(){
		return this->inches;
	}
	
	//constructor
	Distance(){
		this->feets=0;
		this->inches=0;
		printf("Constructor called\n");//POC
	}
	
	Distance(float f,float i){
		this->feets=f;
		this->inches=i;
		printf("Parameterised constructor called\n");
	}
};
int main(){
	Distance d;
	d.display();
	Distance d1(10,20);
	d1.display();
	d.setFeets(11.7);
	d.setInches(10.5);
	//d.display();
	printf("After setting values:");
	printf("%.2lf feets , %.2lf inches",d.getfeets(),d.getinches());
	
	return 0;
}