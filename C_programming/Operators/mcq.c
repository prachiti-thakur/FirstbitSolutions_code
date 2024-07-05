#include<stdio.h>

void main(){
	/*
	int c=123;
	int a= printf("The c is %d %d",c,a); //execution from right to left so a is now not available tf it prints  c value  and for a gb 
	int a=printf("The c is %d",c);
	printf("\n a is %d",a);//12 %d =123 therefore for%d there are 3characters */

	/*Q2
	int a=10;
	int c=printf("abc")+printf("xy")>printf("pqrs")||printf("lm")&& ++a;//after || execution of the statement is stop even if the && has a high precedence
	
	printf(" c is %d  %d ",c,a);
	
	*/
	
	
	/* Q3
	printf(" \n %d \n %d ",printf("\nhello"),printf("\nfirstbitsolutions"));
	
	*/
	
	/*Q4
	int c= printf("abc")|| printf("xyz");
	printf("\n %d ",c);
	*/
	
	/*Q5
	int c=printf("")&&printf("xyz");
	printf(" c is %d",c);
	
	*/
	
	int a=10;
	int b=11;
	int  c= a++ > b++;
	printf("%d %d %d ",a,b,c);
	
	
	
	
	
	
}
