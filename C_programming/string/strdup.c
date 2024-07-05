//strdup
#include<stdio.h>
#include<string.h>
void main(){
	
	char str[]="string";
	char* dup=strdup(str);
	printf("str:%u",str);
	printf("dup:%u",dup);
	//both address are diff
}