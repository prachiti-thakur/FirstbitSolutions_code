//mystrncpy
#include<stdio.h>

#include<string.h>

char* mystrncpy(char*,char*,int);

void main(){
	char str1[10]="Prachiti";
	char str2[10];
	int n;
	printf("Enter n number:");
	scanf("%d",&n);
	char* cpy=mystrncpy(str2,str1,n);
	printf("strncpy:%s",cpy);
	
}


char* mystrncpy(char* str2,char* str1,int n){
	//here we cant check the len of str2 bcz str2 size is 10 length ==count of charc but now is nothing in str2
		if(strlen(str1)>=n){
				int i;
				for(i=0;i<n;i++){
					str2[i]=str1[i];
					//printf("i :%d",i);
				}
				str2[i]='\0'; //if we cant do this . then str2 will char array without null 
				//so %s will not get null after end ->in main while printing
				return str2;
				
		}
		else{
			return NULL;
		}
	
}

