//2. Create a structure Time with data members as hrs, min, sec. Accept the values of all 
//these members from user and display them. Also perform addition of two time variables 
//and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert 
//the given time into sec.



#include<stdio.h>
typedef struct time{
	int hr;
	int min;
	int sec;
}time;

void display(time);
void display(time);


void main(){
	time t1;
	time t2;
	//t3 for addition
	time t3;
	
	store(&t1);
	store(&t2);
	
	display(t1);
	display(t2);
	
//	t3.hr=t1.hr+t2.hr;
//	t3.min=t1.hr+t2.min;
//	t3.sec=t1.sec+t2.sec;
	
	//display(t3);
	
	
}

void store(time* t){
	printf("Enter the details:\n");
	printf("Hr:");
	scanf("%d",&t->hr);
	printf("Min:");
	scanf("%d",&t->min);
	printf("Sec:");
	scanf("%d",&t->sec);
}

void display(time t){
	if(t.sec>59){
		int r = t.sec%60;
		int q = t.sec/60;//t.sec will modify after 
		t.sec = r;
		t.min=t.min+(q);
//	printf("t.sec:%d\n",t.sec);
//	printf("t.min:%d\n",t.min);
	}
	if(t.min>59){
		int r=t.min%60;
		int q=t.min/60;
		t.min=r;
		t.hr=t.hr+(q);
//		printf("t.min:%d\n",t.min);
//		printf("t.hr:%d\n",t.hr);
	}
	printf("%d:%d:%d\n\n",t.hr,t.min,t.sec);
	
}