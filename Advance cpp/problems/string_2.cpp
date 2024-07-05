//a3B2c5 ==> aaaBBccccc
#include<iostream>
using namespace std;
int main(){
	char str[20]={"a3B2c5"};
	
	for(int i=0;str[i]!=0;i++){
		if((str[i]>='a'&& str[i]<='z' || str[i]>='A' && str[i]<='Z')&& (str[i+1]>='0'&&str[i+1]<='9'))
		{
			int s=str[i+1]-48;//conver ascii to int  48-48=0 ,49-48=1
			for(int j=0;j<s;j++){
				cout<<str[i];
			}
		}
	}
	return 0;
}