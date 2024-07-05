//Q1
#include<stdio.h>
void main(){
	char str[]="aei zpo 12";
	int v=0,c=0,s=0,d=0;
	for(int i=0;str[i]!='\0';i++){
		
		if(str[i]=='a'||str[i]=='A'||
			str[i]=='e'||str[i]=='E'||
			str[i]=='i'||str[i]=='I'||
			str[i]=='o'||str[i]=='O'||
			str[i]=='u'||str[i]=='U'){
				
				v++;
				//printf("V:%d\n",v);
			}
			else{
				if(str[i]==' '){
					s++;
					//printf("S:%d\n",s);
				}
				else{
					if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&& str[i]<='z'){
						c++;
						//printf("C:%d\n",c);
					}
					else{
						if(str[i]>='0' && str[i]<='9'){
							d++;
						//	printf("D:%d\n",d);
						}
					}
				}
			}
	}
	printf("Str:%s\n",str);
	printf("vowels:%d consonants:%d space:%d digits:%d",v,c,s,d );
}