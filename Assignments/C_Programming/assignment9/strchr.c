//strchr
#include<stdio.h>
void main(){
	char str[]="prachiti";
	char* str_chr=strchr(str,'p');
	printf("strchar:%s",str_chr);
	char str1[]="hrutu";
	printf("directly:%s",strchr(str1,'r'));//%s ==>print string after that char occur
}
