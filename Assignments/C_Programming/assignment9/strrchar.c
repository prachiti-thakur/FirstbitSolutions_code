//strrchar
#include<string.h>
#include<stdio.h>
void main(){
	char str[]="prachiti";
	char* str_R_char=strrchr(str,'c');
	printf("strrchar:%s",str_R_char);
}