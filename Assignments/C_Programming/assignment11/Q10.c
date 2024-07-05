//palindrome or not 
#include<stdio.h>
#include<string.h>
void main(){
	
	char str[5]="abcd";
	
	char temp[5];
	
	
	//copying
	int i;
	for(i=0;str[i]!=0;i++){
		temp[i]=str[i];
	}
	temp[i]='\0';
	
	printf("temp: %s\n\n",temp);
	
	//reverse
	int  k=strlen(str)-1;
	
	for(int j=0;j<(strlen(str)/2);j++)
	{
		str[j]=str[k];
		k++;
	}
	
	//compare
	int res,count=0;
	for(int x=0;temp[x]!='\0';x++){
		
				if(temp[x]==str[x]){
					count++;
			}
			else{
				if(temp[x]>str[x])
					res=1;
				else
					res=-1;
			}
	
	}
	
	if(count==strlen(temp)){
		printf("palindrome");
	}else{
		if(res== -1)
		printf("-1");
		else
		{
			if(res==1)
			printf("1");
		}
	}
}