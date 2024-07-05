//mystrncasecmp
#include<stdio.h>
#include<string.h>
int mystrncasecamp(char*,char*,int);
void main(){
	char str1[5]="abcde";
	char str2[5]="ABCfE";
	
	
	int n ;
	printf("Enter the number of character wants to compare:");
	scanf("%d",&n);
	
	int res=mystrncasecamp(str1,str2,n);
	if(res==0){
		printf("same");
	}
	else{
		printf("not same");
	}
}

int mystrncasecamp(char* str1,char*str2,int n){
		int count=0;
		for(int i=0;i<n;i++){
			if(str1[i]==str2[i]){
				count++;
			}else{
				if((str1[i]==str2[i]-32)||str1[i]==str2[i]+32){
					count++;
				}
				else{
					return 1;
				}
			}
		}
		
		if(count==n){
			return 0;
		}
}