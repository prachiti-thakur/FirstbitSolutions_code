//longpalindrome
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	char str[20]={"aabbacc"};
	cout<<"str:"<<str<<"\n";
	char ori[20];//to compare with reverse
	
	char longpalin[20]={'\0'};//initailly assign with 
	//cout<<strlen(longpalin);
	int size=20;
	for(int i=0;i<size;i++){
	
		for(int k=i;k<size;k++){
			//store the each sting
		
			
			char temp[20]={'\0'};//for each iteration we need new temp so initially it must be null 
			int p=0;
			for(int j=i;j<=k;j++){
				
				//start storing from 0 in temp till str[j] is not finishing
					temp[p]=str[j];
					p++;

			}
			
			//get string in temp
			//check palindrome or not
			strcpy(ori,temp);
			strrev(temp);
			if(strcmp(ori,temp)==0){
				//compare len 
				if(strlen(ori)>strlen(longpalin)){
					strcpy(longpalin,ori);
				}
			}
			
		}//next string K++ from same i
		
	}
	//i change

	
	cout<<"long palindrome:"<<longpalin;
	
	return 0;
}