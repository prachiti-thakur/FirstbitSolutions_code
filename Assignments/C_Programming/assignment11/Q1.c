//Q1 11assignment
#include<stdio.h>
#include<string.h>
void main(){
	
	char str[50];
	printf("Enter the string:");
	scanf("%s",&str);
	
	printf("\nstring :%s",str);
	
	//before scaning char clean buffer
	fflush(stdin);
	
	char ch;
	printf("\nEnter the character wants to search:");
	scanf("%c",&ch);
	
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]==ch){
			printf("\nch :%c is found at index :%d\n",ch,i);
		}
	}//end of for loop
	
}