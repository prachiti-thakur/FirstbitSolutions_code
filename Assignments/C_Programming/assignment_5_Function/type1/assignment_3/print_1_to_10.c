//print no from 1 to 10 
#include<stdio.h>

//declaration

void print_num();


		void main(){
			print_num();//call
		}

//defination
void print_num(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	
	int i=1;
	
	while(i<=num){
		printf("%d\n",i);
		i++;
	}
}