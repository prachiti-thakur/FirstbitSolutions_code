
#doubt????
#include<iostream>
using namespace std;
int main(){
	char s[20]={'(',')','{','}'};
	int len=strlen(s);
	cout<<len;
	int cnt=0;
	for(int i=0;i<len-1;i+=2){ // i=0 1st brac i=1 2nd brac so next new bract is of 2nd index {
		char a=s[i]+1;
		cout<<a;
		cout<<s[i+1];
		if(s[i+1]==a){
			cnt=cnt+2;
			cout<<cnt;
			
		}else{
			cout<<"False";
			break;
		}
	}
	
	
	if(cnt==len)
	{

	cout<<"True";
	}
		
	return 0;
}