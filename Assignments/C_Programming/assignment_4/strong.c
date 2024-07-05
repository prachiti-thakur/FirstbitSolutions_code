//strong numbers 
#include<stdio.h>
void main(){
	int k,end,rem;
	printf("Enter the end of the range:");
	scanf("%d",&end);
	
	printf("strong numbers are: ");
	
	for(k=1;k<=end;k++){
		int num=k;
		
		int sum_F=0;
		
		while(num>0){
			
			
			rem=num%10;
			num=num/10;
					//calculate the fact of each digits
					int fact=1;
					while(rem>0){
						fact=fact*rem;
						rem--;
					}
					
					//sum of the fact of each digits
					sum_F=sum_F+fact;
			
		}
		
		//equalate sum with original number 
		if(k==sum_F){
			printf("%d\t",k);
		}
	}
}