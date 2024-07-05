//reverse string
#include<stdio.h>
#include<string.h>
void main(){
	char str[10]="prachiti";

	int l=strlen(str);
	int j=l-1;
	//i must goes till half
	for(int i=0;i<(l/2);i++){
		//swap
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		j--;
	}
	printf("%s",str);
}