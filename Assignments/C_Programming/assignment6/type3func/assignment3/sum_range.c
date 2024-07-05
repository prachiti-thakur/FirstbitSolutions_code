//sum of the number within given range
#include<stdio.h>
void sum_range(int*,int*);//declaration

void main(){
	int s=1,e=5;
	sum_range(&s,&e);//call;

}

void sum_range(int* s,int* e){
	
	int sum=0;
	
	int i=*s;
	while(i<=(*e)){
		sum=sum+i;
		i++;
	}
	
	printf("Sum is %d",sum);
}