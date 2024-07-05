//palindrom num -->num==reverse of that num
#include<stdio.h>
int palindrome();//declaration

void main(){
	int res=palindrome();//call
	if(res!=-1)
		printf(" %d Number is Palindrome ",res);
	else
		printf("not palindrome");
}


//function defination
int palindrome(){
	int num=121;
	int num_O=num,rev=0;
	// seperate the digits 
	int rem=0;
	
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	
	if(rev==num_O){
		return num_O;
		
	}
	else{
		return -1;
	}
}