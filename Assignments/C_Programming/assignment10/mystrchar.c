//strchr
#include<stdio.h>
#include<string.h>

char* mystrchr(char*,char);


void main(){
	//char arry
	char str[10]="abdec";
	printf(" string :%s\n",str);
	char ch;
	printf("enter the char to search:");
	scanf("%c",&ch);
	
	char* chr=mystrchr(str,ch);
	printf("strchr:%s",chr);
	
}

//function defination
char* mystrchr(char* str,char ch){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch)
		return &str[i];
	}
}