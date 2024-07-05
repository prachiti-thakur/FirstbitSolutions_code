//2 calculator with returntype
#include<stdio.h>
struct Calculator{
	
	int add(int a,int b){
		printf("address of this:");
		printf("%u\n",this);
		int c=a+b;
		return c;
	}
	
	float add(float a,float b){
		float c=a+b;
		return c;
	}
	float add(int a,float b){
		float c=a+b;
		return c;
	}
	
	float add(float a,int b){
		float c=a+b;
		return c;
	}
};

int main(){
		Calculator c1;
	int s=sizeof(c1);
		printf("size of cl object :%d\n",s);
		printf("address of object:%u\n",&c1);
	int x=10,y=20;
	float p=10.5,q=20.5;
	printf("%d\n",c1.add(x,y));
	printf("%f\n",c1.add(p,q));
	printf("%f\n",c1.add(x,p));
	printf("%f\n",c1.add(p,x));
	return 0;
}