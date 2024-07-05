//remove dup
#include<stdio.h>
void main(){
	char str[]="abpabppa";
	
	for(int i=0;str[i]!='\0';i++){
		for(int j=i+1;str[j]!='\0';j++){
			
			if(str[i]==str[j]){
				int k=j;
				for(;str[k]!='\0';k++){
					
					str[k]=str[k+1];
				}
				j--;//star of the code //jas code shift hotoy tas shift zalela navin index pn check karyla lahnr
				
			}
		}
	}
	
	printf("Str after removing dup:%s",str);
}