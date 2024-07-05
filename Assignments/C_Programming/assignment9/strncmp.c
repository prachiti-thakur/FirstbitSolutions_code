//strncmp()
#include<string.h>
#include<stdio.h>
void main(){
	char str1[]="pracHiti";
	char str2[]="prachiti";
	int str_N_cmp=strncmp(str1,str2,5);
	printf("Str_N_cmp:%d",str_N_cmp);
	
}