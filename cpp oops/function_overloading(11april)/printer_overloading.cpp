//printer
#include<stdio.h>
struct Printer{

	void print(){
		printf("Hello\n");
		
	}
	
	void print(char x){
		printf("%c\n",x);
	}
	
	void print(char* nm){
		printf("%s\n",nm);
	}
	
	void print(int a){
		printf("%d\n",a);
	}
	void print(float f){
		printf("%f\n",f);
	}
};

int main(){
	 Printer p1;
	p1.print();
	p1.print('A');
	p1.print("abc");
//	p1.print(10);
//	p1.print(20.6);
	//	[Error] call of overloaded 'print(double)' is ambiguous
	
	//to remove ambiguity
	int x=10;
	p1.print(10);
	float p=20.6;
	p1.print(p);
	return 0;
}