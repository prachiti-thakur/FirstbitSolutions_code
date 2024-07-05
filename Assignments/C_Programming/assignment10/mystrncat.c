//mystrncat
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * mystrncat(char*,char*,int);
void main(){
	char str1[20]="prachiti";
	char str2[]="thakurFbs";
	
	int n ;
	printf("Enter the number of character wants to concat:");
	scanf("%d",&n);
	
	char* n_cat=mystrncat(str1,str2,n);
	printf("mystrcat:%s",n_cat);
}

char * mystrncat(char* str1,char*str2,int n){
	
		if(strlen(str2)>=n){
			int len=strlen(str1);
			
			for(int i=0;i<n;i++){
				str1[len]=str2[i];
				len++;
			}
			
			return str1;
		}else{
			return NULL;
		}
		
}