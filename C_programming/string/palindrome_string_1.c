//palindrome(string)-->1 line 
#include<stdio.h>
#include<string.h>
void main(){
	
	/*
	//char str[10]="nitin";
	char str[5]="abcd";
//	int res=strcmp(printf("rev:%s\t",strrev(str)),printf("str:%s\t",str)); strcmp(base add,base add) here strcmp(int,int)
	int res1=strcmp(strrev(str),str);//here strcmp (2 base address compare but here so 
	//here str ,str same compare thats why always palindrome
	printf("\nres:%d",res);
	if(res==0){
		printf("palindrome");
	}
	*/
	
	//store temp
	//reverse
	//compare
	
	/*
	char str[]="nitin";
	char* org=strdup(str);
	char* rev=strrev(str);
	int cmp=strcmp(rev,org);
	printf("cmp %d",cmp);
	
	*/
	
	/*
	char str[]="nitin";
	int cmp=strcmp(strrev(str),strdup(str));
	printf("cmp :%d",cmp);
	
	*/
	
	
	/*
	
	char str[]="nitin";
	int cmp=strcmp(strrev(str),strdup(str));
	if(cmp==0){
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	*/
	
	char str[]="nitin";
	strcmp(strrev(str),strdup(str))?printf("no palindrome"):printf("palindrome");

}

