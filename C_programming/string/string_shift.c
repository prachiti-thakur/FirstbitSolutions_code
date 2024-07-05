#include<stdio.h>
#include<string.h>
void main(){
	char str[20]="Prachi";
	int index=3;
	for(int i=0;str[i]!='\0';i++){
		if(i==index){
			//shift
				int k;
				printf("Strlen:%d\n",strlen(str));
			for(k=index;k<(strlen(str)-1);k++){
				str[k]=str[k+1];
			}
		}
	}
	printf("%s\n",str);
	
}