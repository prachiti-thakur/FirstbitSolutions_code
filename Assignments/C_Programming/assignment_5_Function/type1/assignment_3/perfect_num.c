//func without parameters without returns
//perfect number 
//declaration of the func
void perfect();
#include<stdio.h>
void main(){
	perfect();
}

void perfect(){
	
	int num,sum_Fac=0;
	printf("Enter the num:");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum_Fac=sum_Fac+i;//adding factors here
		}
	}
	
	// check it is perfect number or not 
	if(num==sum_Fac){
		printf("It is a perfect number %d",num);
		
	}
	else{
		printf("It is not a perfect number %d",num);
	}
}