//mystrupr
#include<stdio.h>
char* mystrupr(char*);

void main(){
	char str[]="prachiti";
	char* s=mystrupr(str);
	printf("mystrupr: %s",s);
}

char* mystrupr(char* str){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='a' && str[i]<='z')
		str[i]=str[i]-32;
	}
	
	return str;
}