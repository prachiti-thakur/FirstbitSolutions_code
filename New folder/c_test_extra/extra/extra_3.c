//1     1 3 5     1 3 5 7   1 3 5 7
#include<stdio.h>
void main(){

	int num=1;
	int p=0;
	int end=5;
	for(int i=0;i<end;i++){
		for(int j=0;p<num+(i*2);j++){
			p=num+(j*2);
			printf("%d\t",p);
		}
		printf("\n");
	}
	
	
}

/*
int num=1;
	int e=5;
	int p;
	for(int i=0;i<e;i++){
	
	for(int j=num;j<=(num+(i*2));){
		
			for(int k=0;k<(num+(i*2));){
				p=num+(i*2);
				printf("%d\t",p);
				k++;
				j++;
			}
			printf("\n");
		
	}//end of 2nd for loop
	}//end of 1st for loop
*/

/*
	int num=1;
	int e=5;
	int p;
	for(int i=0;i<e;i++){
	
	for(int j=num;j<=(num+(i*2));){
		
			for(int k=0;k<(num+(i*2));){
				p=num+(i*2);
				printf("%d\t",p);
				k++;
				
			}
			printf("\n");
			j++;
		
	}//end of 2nd for loop
	}//end of 1st for loop
*/
