//product
//#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Product {
	int id;
	char name[20];
	int quantity;
	double price;
	
	//setters
	void setId(int id){
		this->id=id;
	}
	void setName(char* nm){
		strcpy(this->name,nm);
	}
	void setQuantity(int q){
		this->quantity=q;
	}
	void setPrice(double p){
		this->price=p;
	}
	
	//getters
	int getId(){
		return this->id;
	}
	
	char* getName(){
		return this->name;
	}
	
	int getQuantity(){
		return this->quantity;
	}
	
	double getPrice(){
		return this->price;
	}
	
	void display(){
		cout<<"Id:"<<this->id<<"\n";
		cout<<"product name "<<this->name<<"\n";
		cout<<"Quantity:%d\n",this->quantity<<"\n";
		cout<<"Price:%lf\n",this->price<<"\n";
	}
	
	//constructor
	//defalut constructor
	Product(){
		this->id=0;
		strcpy(this->name,"Product");
		this->quantity=0;
		this->price=0;
		cout<<"Defalut constructor called\n";
	}
	
	//parameterised constructor
	Product(int i, char* nm, int q ,double p){
		this->id=i;
		strcpy(this->name,nm);
		this->quantity=q;
		this->price=p;
		cout<<"Parameterised constructor called\n";
	}
	
};

int main(){
	Product p;
	printf("P\n");
	p.display();
	Product p1(1,"Book",56,908);
	p1.display();
	
	p.setId(3);
	p.setName("Soap");
	p.setQuantity(9);
	p.setPrice(80);
	
	cout<<"After setting the values of p from setters\n by getter printing:\n";
	cout<<"id:%d\n",p.getId()<<"\n";
	cout<<"Product_name:%s\n",p.getName());
	printf("Quantity:%d\n",p.getQuantity());
	printf("Price:%lf\n",p.getPrice());
	return 0;
}