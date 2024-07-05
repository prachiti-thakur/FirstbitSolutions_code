//mystrcmp
#include<stdio.h>
#include<string.h>
int mystrcmp(char*,char*);

void main(){
	char str1[]="abcd";
	char str2[]="abCd";
	
	int res=mystrcmp(str1,str2);
	if(res==0){
		printf("same string :0");
	}
	else{
		if(res==-1)
		{
			printf("not same:1");
		}
		else
			printf("not same:-1");
	}

}


int mystrcmp(char* str1, char* str2){
			if(strlen(str1)==strlen(str2)){
		
			for(int i=0;i<strlen(str1);i++){
				if(str1[i]!=str2[i]){
					//check asscii value
					if(str1[i]>str2[i])
						return 1;
					else
						return -1;
				}
				
			}
			
		return 0;//for loop exits by its end value (all iterations)
				
	}
	else{
		return NULL;
	}
}