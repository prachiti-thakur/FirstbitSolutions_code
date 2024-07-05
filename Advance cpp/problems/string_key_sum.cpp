//string -->characternum+key
#include<iostream>
using namespace std;
int main(){
	char str[40];
	cout<<"Enter the string:";
	cin>>str;
	
	char key[5]; //last index to store the null character
	cout<<"Enter the key within 4 digits:";
	cin>>key;
	
	int len=strlen(str);
	int result[40];
	
	int j=0;
	for(int i=0;i<len;i++){
		//convert character into num a=1 b=2...
		int num=str[i]-96;
		if(j==strlen(key)){
			j=0;
			int keynum=key[j]-48;//convert character num into int number
			result[i]=num+keynum;
			j++;
		}
		else{
			int keynum=key[j]-48;//convert character num into int number
			result[i]=num+keynum;
			j++;
		}
	}
	
	//print result
	for(int i=0;i<len;i++){
		cout<<result[i]<<"\t";
	}
	return 0;
}