//printer
#include<stdio.h>
struct Printer{

	void print(){
		printf("Hello");
		
	}
	
	void print(char x){
		printf("%c",x);
	}
	
	void print(char* nm){
		printf("%s",nm);
	}
	
	void print(int a){
		printf("%d",a);
	}
	void print(float f){
		printf("%f",f);
	}
};

int main(){
	struct Printer p1;
	p1.print();
	p1.print('A');
	p1.print("abc");
	p1.print(10);
	p1.print(20.6);
	return 0;
}