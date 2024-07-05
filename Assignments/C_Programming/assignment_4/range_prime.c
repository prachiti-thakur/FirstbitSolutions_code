
//range prime 
#include<stdio.h>
void main(){
	int k,end;
	printf("enter the end of the range :");
	scanf("%d",&end);
	
	for(k=1;k<=end;k++){
		int num=k;
		//check for each k the number is prime or not
		int i=2;//start mod from 2 check up to 1 no before that number
				while(i<num){
					//check num is completely divisible or not
					if(num%i!=0){
						i++;
					}
					else{
						break;
					}
				}
				
			if(i==num){
				printf("%d\t",k);
			}
		
		
		 
	}
}