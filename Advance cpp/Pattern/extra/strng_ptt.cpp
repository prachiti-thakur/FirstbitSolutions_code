//string pattern
#include<iostream>
using namespace std;
int main(){
	char str[50];
	cout<<"Enter the string with odd length:\n";
	cin>>str;
	int len=strlen(str);
	//cout<<len<<"\n";
	if(len%2!=0){
		int k=0;
		for(int i=1;i<=len;i++){
			for(int j=1;j<=len;j++){
				
				if(j==i&&j==(len-k))
				{
					cout<<str[i-1]<<" ";
				}
				else{
					if(j==i){
						cout<<str[i-1]<<" ";
					}
					else{
						if(j==len-k){
							cout<<str[len-i]<<" ";
						}
						else{
							//cout<<"* ";
							cout<<"  ";
						}
					}
				}
			}
			k++;
			cout<<"\n";
		}
	}
	else{
		cout<<"Please enter the string with odd length for example:Program\n";
	}
	return 0;
}