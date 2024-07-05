//mystrcat
#include<stdio.h>
char* mystrcat(char*,char*);
void main(){
	
	//array
	//char str1[]="Prachiti"; this will give gb why ? bcz it takes automatically size by no .of chact but we need 
	//larger size array which can stores the next array too
	
	char str1[20]="Prachiti";
	char str2[]="Thakur";
	
	
	
	char* cat=mystrcat(str1,str2);
	printf("concat:%s",cat);
	
}

char* mystrcat(char* str1,char* str2){
	
	
		if(strlen(str1)>strlen(str2)){
			
			int len=strlen(str1);
		
				for(int i=0;i<strlen(str2);i++){
					str1[len]=str2[i];
					len++;
				}
		
		return str1;
		}
		else{
			return NULL;
		}
	
	
}