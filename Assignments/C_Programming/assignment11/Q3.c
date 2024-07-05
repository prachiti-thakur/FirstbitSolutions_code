//Q3	
#include<stdio.h>
#include<string.h>
void main(){
	char str1[]="prachiti";
	int len=strlen(str1);
	//printf("len% d",len);
	char str2[len];
	
	printf("\nOld string:%s\n",str1);
	
	int i;
	for(i=0;str1[i]!='\0';i++){
		
				if(i==0){
					str2[i]=str1[len-1];
					0         7
				}else{
					if(i==(len-1)){
						str2[i]=str1[0];
						7      0
						
					}
					else{
						str2[i]=str1[i];
					}
				}
	}//end for loop
	str2[i]='\0'; //make it string without this it is char arry 
	printf("New string:%s\n",str2);
}