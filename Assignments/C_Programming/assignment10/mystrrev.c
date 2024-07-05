//mystrrev
#include<stdio.h>
#include<string.h>
char* mystrrev(char*);
void main(){
	char str[5]="abcde";
	char* rev=mystrrev(str);
	printf("mystrrev :%s",rev);
}

char* mystrrev(char* str){
	int temp;
	int j=strlen(str)-1;
	for(int i=0;i<(strlen(str)/2);i++){
		
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			j--;
		
	}
	
	return str;
}