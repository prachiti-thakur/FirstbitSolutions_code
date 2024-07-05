//Q7. WAP to Remove the Characters of Odd Index Values in a String
#include<stdio.h>
#include<string.h>
void  main(){
	char str[]="prachiti";
	
	//odd index
	for(int i=0;i<strlen(str);i++){
		if(i%2!=0){
			
			str[i]=str[i+1];
		}
	}
	
	printf("\n\nodd index remove:%s",str);
}