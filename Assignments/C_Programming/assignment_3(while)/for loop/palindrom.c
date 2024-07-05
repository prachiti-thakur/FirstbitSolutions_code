//palindrom num -->num==reverse of that num
#include<stdio.h>
void main(){
	int num=121;
	int num_O=num,rev=0;
	// seperate the digits 
	int rem=0;
	for(;num>0;num=num/10)
	{
		rem=num%10;
		
		rev=rev*10+rem;
	}
	
	if(rev==num_O){
		printf("The number is palindrom %d",num_O);
		
	}
	else{
		printf("The number is not palindrom %d ",num_O);
	}
	
}