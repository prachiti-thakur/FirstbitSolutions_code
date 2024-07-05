//prime number
#include<stdio.h>
int prime();//declaration

void main(){
	int res=prime();//call
	if(res!=-1){
		printf("%d is prime",res);
	}
	else{
		printf("no is not prime");
	}
}


//defination

int prime(){
	int num=5;
	int i=2;
	while(i<num){
		if(num%i!=0){
			i++;
		}
		else{
			break;
		}
	}
	
	if(i==num){
		return num;
	}
	else{
		return -1;
	}
}