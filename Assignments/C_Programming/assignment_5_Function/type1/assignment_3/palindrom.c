
//function without parameters without returns
//palindrom num -->num==reverse of that num


//declaration
void palindrome();

	#include<stdio.h>
	void main(){
	
		palindrome();//call
		
	}
	
	
//defination

void palindrome(){
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	int num_O=num,rev=0;
	// seperate the digits 
	int rem=0;
	
	while(num>0){
		rem=num%10;
		num=num/10;
		rev=rev*10+rem;
	}
	
	if(rev==num_O){
		printf("The number is palindrom %d",num_O);
		
	}
	else{
		printf("The number is not palindrom %d ",num_O);
	}
}