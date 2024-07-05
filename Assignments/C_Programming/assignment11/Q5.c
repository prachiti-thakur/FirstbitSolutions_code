//5. WAP to Count the Number of Vowels in a String
#include<stdio.h>
#include<string.h>
void main(){
	
	char str[]="prachitI";
	int vowels=0;
	int cons=0;
	for(int i=0;i<strlen(str);i++){
		
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'
		||	str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
			{
				vowels++;
			}
		else{
			if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&& str[i]<='z'){
				cons++;
			}
		}
	}//end of for
	
	printf("Vowels:%d\n\n",vowels);
	printf("cons:%d",cons);
}