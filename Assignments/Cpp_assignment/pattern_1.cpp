
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	char str[40];
	cout<<"Enter the string:\n";
	cin>>str;
	int n,i,j;
	n=strlen(str);
	//cout<<n;
	for(i=1;i<=3;i++){
		if(i==1 || i==3){
			for(j=1;j<=(n+2);j++){
//				if(j==1 || j==(n+2))
//					cout<<" ";
//				else
					cout<<"*";
			}
		}
		else{
			for(j=1;j<=(n+2);j++){
			if(j==1 || j==(n+2)){
				cout<<"*";
			}
			else
			{
				cout<<str[j-2];
			}
		}
		}
		cout<<"\n";
	}
	return 0;
}