//power
#include<stdio.h>
void main(){
	int num,power,res=1;
	printf("Enter the num:");
	scanf("%d",&num);
	
	printf("Enter the power:");
	scanf("%d",&power);
	int p=power;
	while(power!=0){
		res=res*num;
		power--;
	}
	
	printf("%d to the power %d is %d",num,p,res);
}
