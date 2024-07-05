//function without parameters without returntype
//armstrong number
#include<stdio.h>

//declaration
int armstrong(int);


void main(){
	int num,a;
	printf("Enter the number:");
	scanf("%d",&num);
	
//call
	a=armstrong(num);
	if(a==1)
	printf("armstrong");
	else
	printf("not armstrong");
	
	
	
}


//defination

int armstrong(int num){
	int sum_cube=0,rem;
	
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
		return 1;
	}
	else{
		return 0;
	}
	
}