//mystrcasecmp
#include<stdio.h>
#include<string.h>
int mystrcasecmp(char*,char*);
void main(){
	char str1[]="abcd";
	char str2[]="ABCe";
	
	int res=mystrcasecmp(str1,str2);
	if(res==0)
		printf("same");
	else
		printf("not same");
	
	
}

int mystrcasecmp(char* str1,char* str2){
			
				if(strlen(str1)==strlen(str2)){
		
				int count=0;
				for(int i=0;i<strlen(str1);i++){
						if(str1[i]==str2[i]){
							count++;
						}else{
							if(str1[i]==str2[i]-32){
								count++;
							}else{
								if(str1[i]==str2[i]+32){
									count++;
								}
								else{
									return 1;//not match that chac
								}
							}
						}
				}
				
				//after comparing  whole string
				if(count==strlen(str1)){
					return 0;
				}
				
	}
	else{
		return NULL;
	}
			
}
