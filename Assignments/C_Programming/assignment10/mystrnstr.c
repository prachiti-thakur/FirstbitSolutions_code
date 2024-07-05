//mystrnstr
#include<stdio.h>
#include<string.h>
char* Mystrnstr(char*,char*,int);

void main(){
	char str[]="Prachiti";
	char sub[]="chitiFBS";
	
	int n;
	printf("Enter the n for strnstr:");
	scanf("%d",&n);
	
	char* str_n=Mystrnstr(str,sub,n);
	printf("strnstr:%s",str_n);
}

char* Mystrnstr(char* str,char*sub,int n){
	
		for(int i=0;i<n;i++)//sub 
		{
			for(int j=0;j<strlen(str);j++)//str
			{
				
				if(sub[i]==str[j]) //check for matching
				{
					
					//once got 1st elem then increment index without disturbing iterative variables
						int x=i+1;
						int k=j+1;
						int  count=1;//got 1 elemrnt allready
						//n-1 ==>got 1 element
						int p=n-1;
						for(;p!=0;p--){ //ieterating on x bcz matchin with substring
							sub[x]==str[k];
							x++;
							k++;
							count++;
						}
						
					if(count==n){
						return &str[j];
					}	
					
				}
				
			}//end j 
			
			
		}//end i
}