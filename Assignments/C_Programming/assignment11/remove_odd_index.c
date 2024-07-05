//wap program to remove the odd index
#include<stdio.h>
#include<string.h>
void main() {

	char str[20]="Prachiti";
	int k=2;
	int i;
	for(i=1;i<=(strlen(str)/2);i++){
		str[i]=str[k];
		k=k+2;
	}
	if(strlen(str)%2!=0){
		str[i]='\0';
	}
	printf("%s %d",str,strlen(str));

}

/*

	for(int i=0; i<strlen(str); i++) {

		if(i%2==0&& i!=0) { // iif we cant take i!=0 then o is also take as even no.
			int j=i-1;
			int k=i;

			for(; k<strlen(str); k=k+2) {
				str[j]=str[k];
				printf("j=%d\n",j);
				printf("k=%d\n",k);
				j++;
			}
			printf("k out :%d\n\n",k);
			//i want to make my evn preserve array as string which is filled with even index
			str[j]='\0';

			printf("str:%s",str);
			break;
		}


	}
	//end of for loop

*/


///////////////////////version 2///////
/*
char str[20]="prachiti";

		//1st->odd index->1
		//1st ->even index to shift back -->2
		
		int j=1;
		for(int i=2;i<strlen(str);){
			
			if(i%2==0){
				str[j]=str[i];
				j++;
				i=i+2;
			}
		}
		
		str[j]='\0';
	printf("str:%s",str);
*/