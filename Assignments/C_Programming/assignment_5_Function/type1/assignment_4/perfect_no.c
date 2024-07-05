//perfect number

#include<stdio.h>
void perfect();
void main(){

	perfect();
	
}

void perfect(){
		int k;
	int end;
	printf("Enter the end:");
	scanf("%d",&end);
	
	for(k=1;k<=end;k++){
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
