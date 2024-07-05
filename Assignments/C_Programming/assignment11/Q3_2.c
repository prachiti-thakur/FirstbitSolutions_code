//#qWAP to Remove the nth Index Character from a Non-Empty String

#include<stdio.h>
#include<string.h>
void main(){
	
	char str[]="prachiti";
	
	char ch;
	printf("Enter the character wants to remove:");
	scanf("%c",&ch);
	
	for(int i=0;i<strlen(str);i++){
		
		if(str[i]==ch){
			//if ch got ==>start shifting
			int j=i;
			
				for(;j<strlen(str);j++){
					str[j]=str[j+1];
				}
		}
	}//end for
	
	printf("After removing the character:%s",str);
}