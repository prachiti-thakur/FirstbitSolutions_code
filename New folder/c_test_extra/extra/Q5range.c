// print range 3 33 333 3333 33333

#include<stdio.h>
void main(){
	int i,sum=0,end,num,rem;
	printf("Enter num:");
	scanf("%d",&num);
	printf("Enter the end :");
	scanf("%d",&end);
	
	for(i=1;i<=end;i++){
		//sum=sum*10;
		rem=num%10;
		//sum=sum+rem;
		sum=sum*10+rem;
		printf("%d\t",sum);
	}
	
}