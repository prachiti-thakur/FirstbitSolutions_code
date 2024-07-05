//perfect number
#include<stdio.h>
void perfect(int*);
void main(){
	int end;
	printf("Enter the end:");
	scanf("%d",&end);
	perfect(&end);
}

void perfect(int* end){
	int k;	
	for(k=1;k<=(*end);k++){
			int num=k;
			int sum=0;
				for(int i=1;i<num;i++){
					if(num%i==0){
						sum=sum+i;
					}
				}
				
				if(k==sum){
					printf("%d\n",k);
				}
	}
	
}