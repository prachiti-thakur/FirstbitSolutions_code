
//armstrong by count of digits//4 digit 1634 3digit 153

#include<stdio.h>
#include<math.h>

//declaration
int armstrong(int);

void main(){
	int num,a;
	printf("Enter the num:");
	scanf("%d",&num);
//call
	a=armstrong(num);
	if(a==1)
		printf("armstrong");
	else
		printf("not armstrong");
}

//defination

int armstrong(int num){
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
						//printf("power:%d ",power);
						cnt--;
					}
					
		sum_P=sum_P+power;
	}
	
	printf("%d",num_O);
	
	if(num_O==sum_P)
	{
		printf("%d",sum_P);
		return 1;
		
	}
	else{
		return 0;
	}
	
}