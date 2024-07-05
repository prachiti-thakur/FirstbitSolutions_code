//mystrrchr
#include<stdio.h>
#include<string.h>
char* mystrrchar(char*,char);
void main(){
	
	char str[]="ababncdn";
	
	char ch;
	printf("enter the char to(last occ) search:");
	scanf("%c",&ch);//b
	
	char* last_occ= mystrrchar(str,ch);
	printf("\nmystrrchr:%s",last_occ);
}

char* mystrrchar(char* str,char ch){
	
		for(int i=(strlen(str)-1);i>=0;i--){
			if(str[i]==ch)
				return &str[i];
		}
		
		return NULL;
}