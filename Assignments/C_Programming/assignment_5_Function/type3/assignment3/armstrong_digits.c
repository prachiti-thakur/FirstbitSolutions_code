//armstrong by count of digits//4 digit 1634 3digit 153
#include<stdio.h>
#include<math.h>
void arms(int);

void main(){
	
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	arms(num);
	
}

void arms(int num){
	
	int rem;
	int num_O=num;
	int num_2=num;
	int sum_P=0;
	
	int count=0;
	while(num>0){
		num=num/10;
		count++;
	}
	
	while(num_2>0){
		rem=num_2%10;
		num_2=num_2/10;//dec
													//pow(base,power)
													//power=pow(rem,count);
		//by using loop // to calculate the power as per count
				int power=1;
				int cnt=count;
				
					while(cnt!=0){
						power=power*rem;
						cnt--;
					}
					
		sum_P=sum_P+power;
	}
	
	
	
	if(num_O==sum_P)
	{
		printf("%d is armstrong number",num_O);
		
	}
	else{
		printf("%d is not an armstrong number",num_O);
	}
	
}