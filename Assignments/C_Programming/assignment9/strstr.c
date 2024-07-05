//strstr
#include<stdio.h>
void main(){
	char str[]="prachiti";
	char str2[]="chiti";
	char* str_str=strstr(str,str2);
	printf("strstr:%s",str_str);
}