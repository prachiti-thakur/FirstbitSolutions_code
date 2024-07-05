#include<stdio.h>
#include<string.h>
void main(){
	char str1[20]="firstbit solutions";
	//strlen(string)==>returns length (int)
	int len=strlen(str1);
	printf("length:%d\n",len);
	
/*	char nm[20];
	char op[20]="xyz";
	
	printf("%s",strncpy(nm,op,3));
	
	*/
	//strcpy(des,src)
	//copies the contents of source string to destination string.
	char str2[20];
	strcpy(str2,str1);
	printf("str2:%s\n",str2);
	
	char* cpy=strcpy(str2,str1);
	printf("cpy :%s",cpy);
	//printf("*cpy %s",*cpy); cpy==base address takes->%s(internally loop) but *cpy gives only one value so increment is not happening here
	
	char p[10]="prachiti";
	//strncpy(str2,str1,n);
	char* scp=strncpy(str2,p,5);
	printf("\nscp %s\n",scp);
	//strcat(1st string,2nd string) 
	//concats or joins first string with second string. 
	//The result of the string is stored in first string.
	
	char str3[40]="hello ";
	strcat(str3,str1);
	printf("str3 :%s\n",str3);
	
	//strcmp(str1,str2)
	//compares 2 string if same return== 0 if not ==1 if assci value of 1st string is less than 2nd string
	int cmp=strcmp(str1,str2);
	printf("cmp:%d\n",cmp);
	int cmp1=strcmp(str3,str1);
	printf("cmp:%d\n",cmp1);
	char s1[]="abcde";
	char s2[]="abdfe";
	int cmp3=strcmp(s1,s2);
	printf("\nasscii of 1st is less then strcmp:%d\n",cmp3);
	int cmp4=strcmp(s2,s1);
	printf("ascci of 1st string is greater then strcmp %d \n",cmp4);
	
	//strncmp(str1,str2,n)//compares n numbers of characters 
	//if same returns 0 else any non zero
	char a[]="first bit";
	char b[]="solutions";
	
	int cmp5=strncmp(a,b,5);
	printf("strncmp %d",cmp5);
	
	//strcat(str1,str2) base address of concatenated string
	char* pqr=strcat(p,s2);
	printf("\n\npqr :%s",pqr);
	
	//strncpy(it concatenate first n chacracters of one string into another)
	
	char* st=strncat(str1,p,3);
	printf("\n st: %s",st);
	printf("\nstr1 :%s",str1);
	
	
}