#include<stdio.h>
#include<string.h>
void main(){
	char str[40];
	printf("Enter the string:");
	scanf("%s",str);
	
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='a'){
			str[i]='$';
		}
	}
	
	printf("string after replace a with 'a with '$':%s ",str);
}