//strcpy
#include<stdio.h>
#include<string.h>
char* mystrcpy(char*,char*);

void main(){
	char str1[10]="prachiti";
	char str2[15];
	
	char* cpy=mystrcpy(str2,str1);
	printf("strcpy:%s",cpy);
	
}

char* mystrcpy(char* str2,char*str1){
	
	for(int i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	
	str2[i]='\0';
	
	return str2;
}