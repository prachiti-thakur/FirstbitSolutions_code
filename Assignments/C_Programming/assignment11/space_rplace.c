#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	printf("Enter the string:");
	//scanf("%s",&str);//for space it will treat it as a null
	gets(str);
	int len=strlen(str);

	for(int i=0;i<len;i++){
		if(str[i]==' ')
		{
			str[i]='$';
		}
	}
	
	printf("\n \n After replacing:%s",str);
}
