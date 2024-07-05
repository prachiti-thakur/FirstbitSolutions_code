

//function without parameters without returntype
//eligible for marriage 
#include<stdio.h>
int eligible(char,int);
void main(){
	int age;
	char gender;
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter gender:");
	fflush(stdin);
	scanf("%c",&gender);
	
int res=eligible(gender,age);//char
if(res==1){
	printf("Eligible");
	
}
else{
	if(res==0){
		printf("not Eligible");
	}else{
		if(res== -1){
			printf("invalid input");
		}
	}
}
}


//function
int eligible(char gender,int age){
		
	
	if(gender=='F'){
		
		if(age>=18){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(gender=='M'){
		
			if(age>=21){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return -1;
		}
	}
}