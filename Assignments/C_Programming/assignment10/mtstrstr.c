//mystrstr
#include<string.h>
#include<stdio.h>
char* mystrstr(char*,char*);
void main() {
	/*
	char str[]="abdabeabxyz";
	char sub[]="axy";*/
	char str[]="prachiti";
	char sub[]="chiti";

	char* sub_str=mystrstr(str,sub);
	printf("%s",sub_str);
}

char* mystrstr(char* str,char* sub) {
	//check the length first
	if(strlen(str)>=strlen(sub)) {
		int p,len;
		//compare sub string with sub
		for(int i=0; sub[i]!='\0'; i++) {
			//i is for sub string
			//check each sub element with entire string
			for(int j=0; str[j]!='\0'; j++) {
				//j for string
				//compare
				if(sub[i]==str[j]) {
					//here we get 1st match char .. now from j+1 check for another element in sub
					int x=i+1;
					
					len=1;//starting from 1 bcz we got 1st elemrnt already
					for(int k=j+1; k<strlen(str); k++) { //k is on str so  its end on length
						if(sub[x]==str[k]) {
							//get next match element so incremwnt sub
							x++;
							len++;//to check how much times condition satisfied
						
						} else {
							break;
						}
					}//end of k for loop
					
					if(strlen(sub)==len) {
						return &str[j];
					}
				}//end of j for loop

			}//end of i for loop


		}

		return NULL;
	} else {
		return NULL;
	}
}