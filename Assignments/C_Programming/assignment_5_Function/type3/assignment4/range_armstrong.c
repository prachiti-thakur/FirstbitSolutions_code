//print the armstrong number in the given range 
#include<stdio.h>
void armstrong(int);
void main(){
	int end;
	printf("enter the end of the range");
	scanf("%d",&end);
	armstrong(end);
}
void armstrong(int end){
		//1,2,3,4,5..............100
	int k,rem;

	printf("armstrong numbers are : ");
	/*
	for(k=1;k<=end;k++){
		//now check the each k is armstrong or not
		int num=k;//assign k to num bcz num is going to be modify
		int sum=0;//we want sum=0 for everytime when we start to check
		
			while(num>0){
				rem=num%num;
				num=num/10;
				sum=sum+(rem*rem*rem);
			}
			
		if(k==sum){
			printf("%d\t",k);
		}
		
		
	}
	*/
	
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