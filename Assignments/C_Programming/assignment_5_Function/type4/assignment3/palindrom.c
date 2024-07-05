
//palindrom num -->num==reverse of that num


//declaration
int palindrome(int);

	#include<stdio.h>
	void main(){
		int num,p;
	printf("Enter the num:");
	scanf("%d",&num);
	
	p=palindrome(num);//call
	if(p==1)
	printf("palindrome");
	else
	printf("not palindrome");
	
		
	}
	
	
//defination

int palindrome(int num){
	
	int num_O=num,rev=0;
	// seperate the digits 
	int rem=0;
	
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	
	if(rev==num_O){
		return 1;
		
	}
	else{
		return 0;
	}
}