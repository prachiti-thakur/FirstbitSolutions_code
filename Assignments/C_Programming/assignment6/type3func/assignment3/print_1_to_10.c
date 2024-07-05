//print no from 1 to 10 
#include<stdio.h>
void print_no(int*,int*);//declaration
void main(){
	
	int num,end;
	printf("Enter the num:");
	scanf("%d",&num);
	printf("Enter the end:");
	scanf("%d",&end);
	
	print_no(&num,&end);//calling
}

//defination
void print_no(int* num,int* end){
	int i=(*num);
	
	while(i<=(*end)){
		printf("%d\n",i);
		i++;
	}

}