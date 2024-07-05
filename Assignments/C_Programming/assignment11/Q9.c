//WAP to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include<stdio.h>
#include<string.h>
void main(){
	
	char str1[10];
	char str2[10];
	
	printf("Enter str1:");
	scanf("%s",str1);
	
	printf("Enter str2:");
	scanf("%s",str2);
	
	
	
	int count_1=0,count_2=0;
	for(int i=0;str1[i]!='\0';i++){
		count_1++;
	}
	
	for(int j=0;str2[j]!='\0';j++){
		count_2++;
	}
	
	if(count_1>count_2){
		printf("larger string:%s",str1);
	}
	else{
		if(count_2>count_1)
		    printf("larger string:%s",str2);
		
		else
		{
						if(count_1==count_2){
					printf("same length!!");
					}
		}
		
	}
	
	
}