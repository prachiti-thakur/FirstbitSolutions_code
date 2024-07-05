//8. WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
#include<string.h>
void main(){
	char str[]="This is string count";
	//printf("str:%s",str);
	int count=1;
	for(int i=0;i<strlen(str);i++){
		
		//to handle the  initail  spce
		while(1) {
				if(str[i]==' '){
					i++;
				}else{
						break;
					}
			
		}//end of while
		
		//if there are  spaces then now our i is on the index of 1st word
		
		if(str[i]==' '){
			//check for the index after space     
			if(str[i+1]>='A' && str[i+1]<='Z' || str[i+1]>='a' && str[i+1]<='z'){
						count++;
			}
		}
		
		
	}//end for
	printf("count :%d",count);
	
	
	
}

/*
int count=1;
		int i=0;
		while(1){
			if(str[i]==' '){
				i++
			}else{
				break;
			}
		}
*/


//my logic
/*

	int count=0;
	int i;
	for(i=0;i<=strlen(str);i++){	
		if(str[i]==' '||str[i]=='\0'){
			printf("str:%c\n",str[i]);
			count++;
		}
	
	}
	
	printf("number of words are :%d",count);
*/