#include<stdio.h>

void main(){
	int user_id=101;
	char password[10]="abc@1";
	
	int u_id;
	char u_pass[10];
	int otp;
	
	printf("Enter the userID:");
	scanf("%d",&user_id);
	
	printf("Enter password:");
	scanf("%d",&u_pass);
	
	int pass=strcmp(password,u_pass);
	if(user_id==user_id && pass==0){
		printf("Enter the otp:1234")
		if(otp==1234){
			printf("success!!");
		}
		else{
			printf("Failed!!");
		}
	}
	else{
		printf("Invalid !!");
	}
}