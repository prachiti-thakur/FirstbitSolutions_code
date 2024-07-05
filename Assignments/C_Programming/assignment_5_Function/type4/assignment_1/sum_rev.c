
//accept 3 digit num ,sum the digits and reverse

#include<stdio.h>
//declaration
int reverse(int num);
int sum(int num);


void main(){
	
		int num=11,s,r;
		s=sum(num);
		printf("sum is %d",s);
		r=reverse(num);
		printf("rev is %d",r);
	
}


//defination
int sum(int num){
	int s=0;
	while(num>0){
		int rem=num%10;
		num=num/10;
		s=s+rem;
	}
	
	return s;
}

int reverse(int num){
	int rev=0;
	while(num>0){
		int rem=num%10;
		num=num/10;
		//printf("num:%d\n",num);
		rev=(rev*10)+rem;
		//printf("rev:%d\n",rev);
	}

	return rev;		
}