#include <iostream>
#include"television.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		Television t;
		t.store();
	try{
	
		if(t.getModelNum()>9999)//max 4 digit 9999
		{
			throw "model num is more than 4 digit";
		}
		if(t.getSize()<12 || t.getSize()>70){
			throw "Invalid size";
		}
		if(t.getPrice()<0 || t.getPrice()>50000){
			throw "price is negative or greater then 50000";
		}
		
		
		t.display();
	}catch(const char* e){
		
		cout<<e;
		//jar throw zal tar zero ni initialize karych throw zalya vr control yeto catch block madhe 
		//so ethe zero all values set karyche
		t.setModelNum(0);
		t.setSize(0);
		t.setPrice(0);
		t.display();
	}
	return 0;
}