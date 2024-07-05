//perfect number 
#include<stdio.h>
void main(){
	int num=6,sum_F=0;
	
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