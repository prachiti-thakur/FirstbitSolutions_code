// i/p 1 and 5
//o/p  1  1+3   1+3+5  1+3+5+7  1+3+5+7+9
// base on the concept difference of 2  not odd even

#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	
	int terms;
	printf("Enter number of terms:");
	scanf("%d",&terms);
	
	int sum=0;
	for(int i=0;i<terms;i++){
		int res=num+(i*2);
		sum=sum+res;
		printf("res :%d\n",res);
		printf("sum is %d\n",sum);
		//sum=sum+(num+(i*2))
		
	}
}