//2(without returntype
#include<stdio.h>
struct Calculator{
	void add(int a,int b){
		printf("%d\n",a+b);
	}
	void add(float a,float b){
		printf("%.2f\n",a+b);
	}
	void add(int a,float b){
		printf("%2.f\n",a+b);
	}
	void add(float a,int b){
		printf("%.2f\n",a+b);
	}
	
};
int main(){
	Calculator c1;
	int x=10,y=20;
	float p=10.5,q=20.5;
	c1.add(x,y);
	c1.add(p,q);
	c1.add(x,p);//? 21
	c1.add(p,x);
	
	printf("%f",x+p);
	return 0;
}

/*
30
31.00
21
20.50
20.500000
*/