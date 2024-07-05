//string pattern
#include<iostream>
using namespace std;
int main1(){
	char str[50];
	cout<<"Enter the string:\n";
	cin>>str;
	int len=strlen(str);
	//cout<<len<<"\n";

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
	
	return 0;
}

int main(){
	char str[50];
	cout<<"Enter the string:\n";
	cin>>str;
	int len=strlen(str);
	int k=0;
	for(int i=1;i<=len;i++){
		for(int j=1;j<=len;j++){
			if((j==i && j==(len-k)) || j==i ){
				cout<<str[i-1]<<" ";
			}
			else{
				if(j==len-k){
					cout<<str[len-i]<<" ";
				}
				else{
					cout<<"  ";
				}
			}
		}
		k++;
		cout<<"\n";
	}
	return 0;
}

/*op-->

p             i
  r         t
    a     i
      c h
      c h
    a     i
  r         t
p             i


Enter the string :
12345678
1             8
  2         7
    3     6
      4 5
      4 5
    3     6
  2         7
1             8
*/
