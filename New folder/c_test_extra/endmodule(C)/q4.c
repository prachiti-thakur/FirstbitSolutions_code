//reverse string by recursion
#include<stdio.h>
#include<string.h>
char* str_rev(int,int,char*);

void main(){
	char str[]="abcde";
	int i=0;
	int len=strlen(str)-1;
	char* rev=str_rev(i,len,str);
	printf("rev str :%s\n",rev);
	printf("str :%s\n",str);
	printf("address of rev:%u\n",rev);
	printf("address of str :%u\n",str);
}
char* str_rev(int i,int len,char* str){
//	printf("I%d\n",i);
//	printf("len:%d",len);
//	printf("str:%s\n",str);
	
	if(i<(strlen(str)/2)){
		//printf("I%d\n",i);
		char temp=str[i];
		str[i]=str[len];
		str[len]=temp;
		return str_rev(++i,--len,str);
	
	}
	
		
			return str;
}