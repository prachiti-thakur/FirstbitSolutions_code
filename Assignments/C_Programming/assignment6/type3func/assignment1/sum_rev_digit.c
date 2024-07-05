//accept 3 digit num ,sum the digits and reverse

#include<stdio.h>
void sum_D(int*);
void rev_D(int*);


void main(){
	int num=12;
	int num1=num;
	sum_D(&num);
//now here in the  memory num is 0 so store it other variable 

	rev_D(&num1);

}

//functions definations 

void sum_D(int* num){
	int sum=0,rem;
	while((*num)>0){
		rem=(*num)%10;
		(*num)=(*num)/10;
		sum=sum+rem;
	}
	printf("\nThe sum of the digit is %d ",sum);
}

void rev_D(int* num){
	int rev=0,rem;
	//printf("num %d",*num);
	while((*num)>0){
		rem=(*num)%10;
		(*num)=(*num)/10;
		rev=(rev*10)+rem;
		//printf("%d",rev);
	}
		printf("\nThe reverse of the number is %d",rev);
	
}