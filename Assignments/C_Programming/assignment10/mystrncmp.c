//mystrncmp
#include<stdio.h>
#include<string.h>
int mystrncmp(char*,char*,int);
void main(){
	char str1[5]="abcde";
	char str2[5]="absdc";
	
	int n ;
	printf("Enter the number of character wants to compare:");
	scanf("%d",&n);
	
	
	int res=mystrncmp(str1,str2,n);
	if(res==0)	
		printf("same");
	else
		printf("not same");
}

int mystrncmp(char* str1,char* str2,int n){
			
			for(int i=0;i<n;i++){
				if(str1[i]!=str2[i])
				{
					return 1;
				}
				
			}
			
			return 0;
}