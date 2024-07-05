//strrchr (last occurance)
#include<stdio.h>
#include<string.h>
char* mystrrchar(char*,char);
void main(){
	char str[]="ababncdn";
	
	char ch;
	printf("enter the char to(last occ) search:");
	scanf("%c",&ch);//b
	
	char* last_occ= mystrrchar(str,ch);
	printf("\nmystrrchr:%s",last_occ);
}

char* mystrrchar(char*str, char ch){
	//count 
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch)
			count++;
	}
	
	int num=count;
	int k;
	for(k=0;num!=0;k++){
			if(str[k]==ch){
				num--;
				//printf("ch :%c\n",ch);
				//printf("num:%d\n",num);
				printf("K:%d\n",k);
				
			}
	}
//	k++ (last ieteartion ) k=8 then check num!='\0'
	printf("K:%d\n",k-1);
	
	//printf("str[k]:%c",str[k-1]);
	return &str[k-1];
}