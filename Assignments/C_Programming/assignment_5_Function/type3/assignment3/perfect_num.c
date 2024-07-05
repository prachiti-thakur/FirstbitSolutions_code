//perfect number 
#include<stdio.h>
void perfect(int);//declaration

void main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	perfect(num);//calling
}
//defination
void perfect(int num){
	int sum_F=0;
	
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum_F=sum_F+i;//adding factors here
		}
	}
	
	// check it is perfect number or not 
	if(num==sum_F){
		printf("It is a perfect number %d",num);
		
	}
	else{
		printf("It is not a perfect number %d",num);
	}
}