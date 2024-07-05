//strlwr

#include<stdio.h>
char* mystrlwr(char*);
void main(){
	
	char str[]="PRACHITI";
	char* lower=mystrlwr(str);
	printf("mystrlwr:%s",lower);
}

char* mystrlwr(char* s){
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='A'&& s[i]<='Z')
		s[i]=s[i]+32;
	}
	
	return s;
}
