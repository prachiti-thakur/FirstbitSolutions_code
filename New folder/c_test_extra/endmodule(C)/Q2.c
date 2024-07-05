//Q2
#include<stdio.h>
#include<math.h>
void main(){
	int no;
	printf("Enter the no to reverse:");
	scanf("%d",&no);
	int rev=func_rev(no);
	printf("After reverse :%d",rev);
		
		
}

int func_rev(no){
	if(no==0){
		return 0;
	}
	else{
		int count=0,c,power,num=no;
		while(num!=0){
			num=num/10;
			count++;
		}
		c=count-1;
		power=pow(10,c);
		
		return ((no%10)*power )+func_rev(no/10);
		
	}
}
