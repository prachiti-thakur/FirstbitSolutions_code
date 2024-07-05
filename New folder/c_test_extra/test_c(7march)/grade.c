//grades
#include<stdio.h>
void main(){
	int total_marks;
	printf("Enter Your Total_marks:");
	scanf("%d",&total_marks);
	
	if(total_marks>75){
		printf(" Grade is :A+");
	}
	else{
		if(total_marks>60){
			printf("Grade is :A");
		}
		else{
			if(total_marks>50){
				printf("Grade is :B");
			}
			else{
			if(total_marks>35)
				printf("Pass");
			else
				printf("fail");
			}
		}
	}
}