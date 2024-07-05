//perfect number 
#include<stdio.h>
int perfect();//declaration


void main(){
	int res=perfect();//call
	if(res!=-1){
		printf("%d is perfect",res);
	}
	else{
		printf("not perfect");
	}
}

//function defination
int perfect(){
	int num=6,sum_F=0;
	
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum_F=sum_F+i;//adding factors here
		}
	}
	
	// check it is perfect number or not 
	if(num==sum_F){
		return num;
		
	}
	else{
		return -1;
	}
}