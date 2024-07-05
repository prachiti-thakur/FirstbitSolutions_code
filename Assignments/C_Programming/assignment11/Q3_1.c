//Q3WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
#include<string.h>
void main(){
	char str[]="prachiti";
	
	int n;
	printf("Enter the  n :");
	scanf("%d",&n);
	
	for(int i=0;i<strlen(str);i++){
		if(i>=n){
			str[i]=str[i+1];
		}
	}
	
	printf("after remove %d index :%s",n,str);
}