//function without parameters without returntype
//armstrong number
#include<stdio.h>

//declaration
void armstrong();


void main(){
//call
	armstrong();
	
	
	
}


//defination

void armstrong(){
	int num,sum_cube=0,rem;
	printf("Enter the number:");
	scanf("%d",&num);
	
	int O_num=num;
	while(num>0){
		rem=num%10;//3//5//1
		//printf("%d rem",rem);
		num=num/10;//15//1//0
		//printf("%d num",num);
		sum_cube=sum_cube+(rem*rem*rem);//0+27//27+125=152//152+1//153
		//printf("%d sum_cube",sum_cube);
	}
	
	if(sum_cube==O_num){
		printf("\n%d is armstrong number",O_num);
	}
	else{
		printf("\n%d is not a armstrong number",O_num);
	}
	
}