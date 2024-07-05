//func without parameters without returns
//perfect number 
//declaration of the func
int perfect(int);
#include<stdio.h>
void main(){
	int num,p;
	printf("Enter the num:");
	scanf("%d",&num);
	p=perfect(num);
	if(p==1)
	printf("perfect number");
	else
	printf("not perfect number");
}

int perfect(int num){
	
	int sum_Fac=0;

	
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum_Fac=sum_Fac+i;//adding factors here
		}
	}
	
	// check it is perfect number or not 
	if(num==sum_Fac){
		return 1;
	}
	else{
		return 0;
	}
}