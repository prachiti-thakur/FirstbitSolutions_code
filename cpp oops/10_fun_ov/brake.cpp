//brake
#include<stdio.h>
#include<string.h>
struct Car{
	char brake[20];
	
	Car(){
		printf("\nDefault constructor called!!\n");
		strcpy(this->brake,"Brake");
	}
	Car(char* nm){
		printf("\nParameterised constructor called\n");
		strcpy(this->brake,nm);
	}
	
	void setBrake(char* nm){
		strcpy(this->brake,nm);
	}
	
	char* getBrake(){
		return this->brake;
	}
	
	void display(){
		printf("\nCar\n");
		printf("brake:%s",this->brake);
	}
	
};

struct Bike{
	char brake[20];
	
	Bike(){
		printf("\nDefault constructor called!!\n");
		strcpy(this->brake,"Brake");
	}
	Bike(char* nm){
		printf("Parameterised constructor called\n");
		strcpy(this->brake,nm);
	}
	
	void setBrake(char* nm){
		strcpy(this->brake,nm);
	}
	
	char* getBrake(){
		return this->brake;
	}
	
	void display(){
		printf("\nBike\n");
		printf("brake:%s",this->brake);
	}
};

struct Brake{
	void toapply(Car c){
		printf("\nBrake applied:%s",c.getBrake());
	}
	
	void toapply(Bike b){
		printf("\nBrake Applied:%s",b.getBrake());
	}
};

int main(){
	Brake br;
	
	Car c("Disc");
	c.display();
	Bike b("Drum");
	b.display();
	
	br.toapply(c);
	br.toapply(b);
	return 0;
}