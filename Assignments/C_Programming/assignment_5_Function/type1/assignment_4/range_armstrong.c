//print the armstrong number in the given range 
#include<stdio.h>
void armstrong();
void main(){
	
	armstrong();
}

void armstrong(){
	int k,end,rem;
	printf("enter the end of the range");
	scanf("%d",&end);
	printf("armstrong numbers are : ");

	
	for(k=1;k<=end;k++){
		
		int num=k;
		int num_2=k;
		//int num=num_2=k; k==>num_2 and num_2==>num
		
		int count=0;
		int sum=0;
		//to check the count
		while(num>0){
			num=num/10;
			count++;
		}
		
		//sum of the power 
					while(num_2>0){
						rem=num_2%10;
						num_2=num_2/10;
						
						//calculate the power
						int power=1;
						int cnt=count;
									while(cnt!=0){
										power=power*rem;
										cnt--;
									}
						
						sum=sum+power;
					}
					
					
			//check that number is equal to that sum of the power or not ?
			if(sum==k){
						printf(" %d\t",k);
					}
					
	}
	
}