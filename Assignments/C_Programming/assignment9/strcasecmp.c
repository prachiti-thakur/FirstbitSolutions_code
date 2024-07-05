//strcasecmp
#include<stdio.h>
void main(){
	char str1[]="prchiti";
	char str2[]="praChiTi";
	
	int case_cmp=strcasecmp(str1,str2);
	//printf("direct :%d",strcasecmp(str1,str2));
	printf("strcasecmp:%d",case_cmp);//non zero ->(greater than zero)
	
	
}