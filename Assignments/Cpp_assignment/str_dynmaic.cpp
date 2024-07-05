#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main1(){
	
	char* str=NULL;
	printf("Enter the str:");
	scanf("%s",str);
	str=(char*)realloc(str,sizeof(char)*strlen(str));
	printf("%s",str);
	return 0;
}
int main(){
	char* str=NULL;
	printf("Enter the str:");
	scanf("%s",str);
	printf("%d",strlen(str));
	str[strlen(str)]='\0';
	str=(char*)realloc(str,sizeof(char)*strlen(str));
	printf("%s",str);
	return 0;
}